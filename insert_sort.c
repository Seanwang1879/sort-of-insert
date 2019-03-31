#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE  100

void insert_sort(int *array);
void main()
{
	int i;
	int *array;
	
	array = (int *)malloc(sizeof(int)*MAX_SIZE);
	for(i=0; i<MAX_SIZE; i++){
		scanf("%d",&array[i]);
	}

	insert_sort(array);
	free(array);
	return ;
}

void insert_sort(int *array)
{
	int i,j,k;
	int temp;
	
	for(i=1; i<=MAX_SIZE-1; i++){
		if(array[i] < array[i-1]){
			temp = array[i];
			array[i] = array[i-1];
			array[i-1] = temp;
			
			for(j=i-1; j>0; j--){
				while(array[i-1] > array[j-1]){
					temp = array[i-1];
					for(k=i-2; k>j-1; k--){
						array[k+1] = array[k];
					}
				}
			}
		}
	}
	return ;
}





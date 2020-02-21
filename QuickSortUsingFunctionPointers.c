#include <stdio.h>
#include <stdlib.h>
int compare(const void* a,const void* b){
	return *(int*)a-*(int*)b;
}
int compareDescending(const void* a,const void* b){
	return *(int*)b-*(int*)a;
}

int main(){
	
	int arr[]={1,3,2,4,7,5,6};
	int i;
	for(i=0;i<7;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	int (*pointerToFunction[])(const void*,const void*)={&compare,&compareDescending};

		

	int f;
	for(f=0;f<2;f++){
		qsort(arr,7,sizeof(int),pointerToFunction[f]); //Why does this work with or without the star???
		for(i=0;i<7;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}

}

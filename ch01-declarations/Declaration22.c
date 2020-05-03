#include <stdio.h>

//When the array is initialized, the values are set to zero.
//But if the array is not initialized, the values are garbage

int main(){
	int ar[5]={3,2};
	printf("%d %d %d %d %d\n",ar[0],ar[1],ar[2],ar[3],ar[4] );

	int arr[5]={};
	printf("%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4] );

	int arrr[5];
	printf("%d %d %d %d %d\n",arrr[0],arrr[1],arrr[2],arrr[3],arrr[4] );



}
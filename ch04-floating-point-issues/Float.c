#include <stdio.h>

int main(){
	float a=13.4534636;
	int* b;
	b=(int*)&a;
	int c=*b;
	int i;
	printf("%f %d\n",a,c);
	printf("%d", c%2);
	for(i=0;i<32;i++){
		printf("%d", c%2);
		c=c>>1;
	}


	printf("\n");
}
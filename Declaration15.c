#include <stdio.h>
//HOW THE HELL DOES THIS HAPPEN?
int main(){
	
	void display(){
		printf("aa\n");
	}
	void (*pointerToDisplayFunction)()=&display;
	
	printf("%d\n",(int)&display);
	pointerToDisplayFunction();


	int b=10;
	int *a=&b;
	printf("%d\n",*a);

}


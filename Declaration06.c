#include <stdio.h>

int main(){
	extern int i;
	printf("%d\n",i);
	

	return 0;
}

int i=20;
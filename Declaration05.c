#include <stdio.h>

int main(){
	extern int i;
	i=20;
	printf("%d\n",i);
	return 0;
}
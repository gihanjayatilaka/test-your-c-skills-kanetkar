#include <stdio.h>

union uu{
	int age;
	char name[10];
};

int main(){
	union uu x;
	x.age=1;
	printf("%d\n", x.age);
}
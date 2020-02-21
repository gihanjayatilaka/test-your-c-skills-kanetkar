#include <stdio.h>

struct person{
	char name[20];
	int age;
};

int main(){
	struct person aa={"AA",99};
	struct person bb={"BB",30};

	printf("%s %d\n", aa.name,aa.age);
	printf("%s %d\n", bb.name,bb.age);

	return 0;
}
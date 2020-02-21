#include <stdio.h>

struct sts{
	char name[100];
	int age;
	int height;
};

int main(){
	struct sts gg={"Hi"};
	printf("%s %d %d\n", gg.name,gg.age,gg.height);	


	return 0;
}
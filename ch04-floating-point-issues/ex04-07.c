#include <stdio.h>
/*
No error / warning message (even with -Wall)
*/

int main(){
    struct emp{
        char name[20];
        float sal;
    };
    
    struct emp e[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%s %f",e[i].name,&e[i].sal);
    }
    
}
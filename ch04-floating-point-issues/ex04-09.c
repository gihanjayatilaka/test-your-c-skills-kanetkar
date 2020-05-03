#include <stdio.h>

/*
    7.0 is taken as a double
*/

int main(){
    float f=1.7;
    double d=1.7;
    long double ld=1.7;

    // printf("%f %lf %Lf",f,d,ld);

    printf("%d %d %d",f==1.7,d==1.7,ld==1.7);



}
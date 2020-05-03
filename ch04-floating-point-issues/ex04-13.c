#include <stdio.h>
/*
    ANSWER: sizeof(float)=4 sizeof(double)=8 sizeof(long double)=16
*/

int main(){
    printf("sizeof(float)=%d sizeof(double)=%d sizeof(long double)=%d\n",\
          (int)sizeof(0.7f),(int)sizeof(0.7),(int)sizeof(0.7l));
}
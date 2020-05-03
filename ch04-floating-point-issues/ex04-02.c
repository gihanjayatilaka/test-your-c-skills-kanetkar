#include <stdio.h>
/*
    When we have 0.7f, it is kept as a float instead of the double.
    Then the comparision gives equal.
*/
int main(){
    float a=0.7;
    if(a<0.7f){
        printf("Less than 0.7\n");
    }
    else{
        printf("More than or equal 0.7\n");
    }
}
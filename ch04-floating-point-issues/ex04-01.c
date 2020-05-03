#include <stdio.h>
/*
    The floating point number saved in binary representation is always smaller or eqal to the number
    we are trying to save. The comparision happens with the double instead of the float.
*/
int main(){
    float a=0.7;
    if(a<0.7){
        printf("Less than 0.7\n");
    }
    else{
        printf("More than or equal 0.7\n");
    }
}
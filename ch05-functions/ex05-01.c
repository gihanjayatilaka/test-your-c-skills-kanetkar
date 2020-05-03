#include <stdio.h>
/*
    static variables get delared only once in a function, irrespective of how many times it is called
*/

int sumdiag(int n){
    static int s=0;
    int d;
    if(n!=0){
        d=n%10;
        n=(n-d)/10;
        s=s+d;
        sumdiag(n);
    }
    return s;
}


int sumdiag2(int n){
    static int s=0;
    int d;
    if(n!=0){
        d=n%10;
        n=(n-d)/10;
        s=s+d;
        sumdiag(n);
    }
    return s;
}

int main(){
    int a=sumdiag(123);
    int b=sumdiag(123);
    printf("%d %d\n",a,b);
}



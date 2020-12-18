#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int);
void answera(int a[4], int n);

int main(void){
    int n = 10;
    int fn;
    fn = fibo(n);   
    printf("fn = %d",fn);
}

int fibo(int n){

    int a[4];

    if(n > 1){
        answera(a,n-1);
    }
    

    if(n == 0){
        return 1;
    }else if(n == 1){
        return 1;
    }else if( n > 1){
        return a[0] + a[1];
    }else{
        return -1;
    }
}

void answera(int a[4],int n){
    if( n == 1){
        a[0] = 1;
        a[1] = 1;
        a[2] = 1;
        a[3] = 0;
    }else if( n % 2 == 0){
        answera(a,(int)(n/2));
        int a0copy = a[0]*a[0] + a[1]*a[2];
        int a1copy = a[0]*a[1] + a[1]*a[3];
        int a2copy = a[2]*a[0] + a[3]*a[2];
        int a3copy = a[2]*a[1] + a[3]*a[3];
        a[0] = a0copy;
        a[1] = a1copy;
        a[2] = a2copy;
        a[3] = a3copy;
    }else if(n % 2 == 1){
        answera(a,(int)((n-1)/2));
        int a0copy = a[0]*a[0] + a[1]*a[2];
        int a1copy = a[0]*a[1] + a[1]*a[3];
        int a2copy = a[2]*a[0] + a[3]*a[2];
        int a3copy = a[2]*a[1] + a[3]*a[3];
        a[0] = a0copy + a1copy;
        a[1] = a2copy + a3copy;
        a[2] = a0copy;
        a[3] = a2copy;
    }
}


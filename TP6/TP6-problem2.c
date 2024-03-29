#include<stdio.h>
#include<math.h>
int main(){
    int n=0;
    int m=2;
    int mul;
    while(n<=10){
        mul=pow(2,n);
        printf("2^%d = %d \n",n,mul);
        n++;
    }
}
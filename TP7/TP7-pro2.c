#include<stdio.h>
#include<math.h>
int main(){
    int n=0;
    int mul;
    do{ 
        mul=pow(2,n);
        printf("\n2^%d = %d",n,mul);
        n++;
    }while(n<=10);
}
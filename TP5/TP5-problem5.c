#include<stdio.h>
int main(){
    int n,prime=0;
    printf("Enter a number :");scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(n%i==0){
            prime=prime+1;
        }
    }
    if(prime==2){
        printf("%d is a prime number because it is onl divisible by itself and 1.",n);
    }else{
        printf("The number is not a prime.");
    }    
}
#include<stdio.h>
int main(){
    int n;
    int input;
    int count=0;
    printf("Enter a number:");scanf("%d",&n);
    input=n;
    if(n<10000){
        while(n>0){
           // printf("%d ",n);
            n=n/10;
            count++;
        }
    }
    printf("This number %d has %d digit.",input,count);
}
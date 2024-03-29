#include<stdio.h>
#include<stdlib.h>
void sum(int n){
    for(int k=1;k<=n;k++){
        if(k==10){
            continue;
        }else{
        printf("%d ",k);
        }
    }
}
int main(){
    while(1){
    int n;
     printf("\nEnter a number: ");
    scanf("%d",&n);
    if(n>=1){
        printf("DIsplay number using function displaySequence(1, %d):\n",n);
    }else if(n<=0){
        printf("Invalid input number. You are only allowed to input the positive number greater than 1\n");
        break;
    }
    sum(n);
    }
}


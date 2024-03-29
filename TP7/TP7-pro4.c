#include<stdio.h>
int main(){
    int sum=0;
    int i=1;
    do{
        i++;
        printf("Enter a number: ");
        scanf("%d",&i);
        if(i==0){
            break;
        }
        sum=sum+i;
    }while(i!=0);
    printf("The summation of all input number is %d",sum);
    
}
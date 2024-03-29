#include<stdio.h>
int main(){
    int num=1;
    int sum=0;
    while(num!=0){
        printf("Enter number:");scanf("%d",&num);
        if(num==0){
            break;
        }
        sum=sum+num;
    }
    printf("The sumation of all input number is %d",sum);

}
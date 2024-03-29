#include<stdio.h>
int main(){
    int num;
    printf("Enter number ");
    scanf("%d",&num);
    
    if (num<0 && num%2 == 1){
        printf("%d It is in the category A because it is a negative and odd numbers",num);
    }
    else if (num<0 && num%2 == 0)
    {
        printf("%d It is in the category B because it is a negative and even numbers",num);
    }
    if (num>0 && num%2 == 1){
        printf("%d It is in the category c because it is a positive and odd numbers, ",num);
    }
    else if (num>0 && num%2 == 0)
    {
        printf("%d It is in the category D because it is a positive and even numbers",num);
    }
    
    return 0;
}
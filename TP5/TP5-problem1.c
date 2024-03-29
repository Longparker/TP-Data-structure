#include<stdio.h>
int main(){
    int sum=0,sub;
    printf("The sumation: ");
    for(int i=500;i>=1;i--){
        printf("%d ",i);
        sum=sum+i;
        if(i>1){
            printf("+");            
        }
    }
     printf(" = %d",sum);
    printf("\nThe subtraction:"); 
    for(int i=500;i>=1;i--){
         printf("%d ",i);
        sub=sub-i;
        if(i>1){
            printf("-");            
        }
    }
     printf(" = %d",sub);
}
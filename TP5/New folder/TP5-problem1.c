#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int sum=0;
    printf("Input number greater than 1: ");
    scanf("%d ",&n);
    do{
        sum+=n*n*n;
        if(n==1){
            printf("%d^3 = ",n);
        }else{
            printf("%d^3+ ",n);
        }
        n--;
    }while(n>=1);
    printf("%d ",sum);
}

#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
    printf("Input a number: ");
    scanf("%d",&n);
    if(n<=1000){
        for(int i=n; i<=1000; i++){
            if(i==100){
                continue;
            }
            //printf("%d ",i);
             sum=sum+i;
        }
         printf("The summation from %d to 1000 except the number 100 is %d ",n,sum);
    }else{
        printf("The input number is not valid");
    }
}
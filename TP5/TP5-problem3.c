#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=1;i<=48;i++){
        if(i % 2 ==0){
            //printf("%d ",i);
            if(i!=48){
                 printf("%d + ",i);
            }else{
                 printf("%d ",i);
            }
           // printf("%d ",i);
            sum=sum+i;
        }
    }
     printf("=%d ",sum);
}
#include<stdio.h>
int main(){
    int num[7],sum=0,count=0;
    int i,j;
    int max;
    float avg;
    for(i=0;i<7;i++){
        printf("Enter number #%d:",i+1);
        scanf("%d",&num[i]);
        if(i==0 || num[i]>max){
            max=num[i];
        }
    }
     printf("\nAll input deta in the array are : ");
    for(j=0;j<7;j++){
        printf("%d",num[j]);
        if(j<6){
            printf(",");
        }else{
            printf(".");
        }
        sum=sum+num[j];
        count++;
        avg=(float)sum/count;
    }
    //printf("%2.f",avg);
    printf("\nCompute statistical deta are:");
    printf("\nTotal=%d ",sum);
    printf("\nThe average is %2.f",avg);
    printf("\nThe maximum number is %d",max);
    

}
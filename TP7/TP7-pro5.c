#include<stdio.h>
int main(){
    float number;
    float sum=0;
    float avg;
    int count=0;
    do{
        printf("Enter a number:");
        scanf("%f",&number);
        if(number==0){
            break;
        }
        sum=sum+number;
        count++;
       
    }while(number!=0);
     if (count == 0) {
        printf("No numbers entered. Exiting program.\n");
    } else {
        avg = sum / count;  
        printf("Average of the entered numbers: %.2f\n", avg);
    }
}
#include<stdio.h>
enum operation{
    Addition=1,Subtraction,Multiplication,Division
};

int main(){
    enum operation hi;
    float num1,num2;
    while(1){
    printf("Enter number :");scanf("%f %f",&num1,&num2);
    printf("Enter number of operation 1-Addition 2-Subtraction .... :");scanf("%d",&hi);
    switch(hi){
        case Addition:
        printf("Addition = %f\n",num1+num2);
        break;
         case Subtraction:
        printf("Subtraction = %f\n",num1-num2);
        break;
         case Multiplication:
        printf("Multipliction = %f\n",num1*num2);
        break;
         case Division:
        printf("Division = %f\n",num1+num2);
        break;
        default:
        printf("plz Enter valid operation:");
        break;
    }
    }
}

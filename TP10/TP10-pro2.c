#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cubevalue(int n){
   
return n*n*n;
}
int main(){
    while(1){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
     if(num>0){
        printf("The cube of %d equal to :%d\n",num,cubevalue(num));
     }else if(num<0){
        printf("Error! Invalid input number! You must input a number greater than 0. Please try again!\n");
     }
        
    }
}

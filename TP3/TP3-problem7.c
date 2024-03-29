#include<stdio.h>
#include<math.h>
int main(){
    
    char gen,name[50];
    float sal,paytax,tax;
    printf("Enter name : ");
    scanf("%s",&name);
    printf("Enter gender : ");
    scanf("%s",&gen);
    printf("Enter salary : ");
    scanf("%f",&sal);
    if(gen=='M'){
    if (sal>=400){
        tax=0.10;
    }else if(sal>=200 &&sal<=400){
        tax=0.05;
    }}
    if(gen=='F'){
    if(sal>=500){
        tax=0.05;
    }else if(sal>=250 &&sal<=500){
        tax=0.03;
    }}
    paytax= sal*tax;
      printf("Hi %s, based on your given information, the tax salary that you need to pay : %.2f USD",name,paytax);
    return 0;


}
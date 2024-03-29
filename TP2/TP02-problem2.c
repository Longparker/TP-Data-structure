#include<stdio.h>
#include<math.h>
int main(){
    int a,b,add,sub,mul,mod;
    float div;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=(float)a/b;
    mod= a%b;
    printf("Addition: %d+%d=%d\n",a,b,add);
    printf("Subtraction: %d-%d=%d\n",a,b,sub);
    printf("Multiplication:%d*%d=%d\n",a,b,mul);
    printf("Division: %d/%d=%.2f\n",a,b,div);
    printf("Modulo: %dmod%d=%d",a,b,mod);
    return 0;
}
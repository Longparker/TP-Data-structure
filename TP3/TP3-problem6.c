#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,deta,x1,x2,x12;
    printf("Enter a :");scanf("%f",&a);
    printf("Enter b :");scanf("%f",&b);
    printf("Enter c :");scanf("%f",&c);
    deta=(float)pow(b,2)-4*a*c;
    printf("The deta value of this equation is %2.f\n",deta);
    if(deta>0){
        x1=(float)(-b+sqrt(deta))/2*a;
        x2=(float)(-b-sqrt(deta))/2*a;
        printf("The equation has two root");
        printf("x1=%2.f,x2=%2.f",x1,x2);
    }
    else if(deta=0){
         x12=(float)(-b/2*a);   
        printf("The equation has a root x12=%.2f",x12);
    }
    else if (deta<0){ 
        printf("The equation has no root");
    }
    return 0;
}
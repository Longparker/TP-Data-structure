#include<stdio.h>
#include<math.h>
typedef struct{
    int status_code;
    float x1;
    float x2;
}root;
root solvequadratic(int a,int b,int c){
    root s;
    int delta=pow(b,2)-4*a*c;
    printf("Delta=%d\n",delta);
    if(delta>0){
        s.x1=(float)-b+sqrt(delta)/(2*a);
        s.x2=(float)-b-sqrt(delta)/(2*a);
        printf("X1= %.2f\n",s.x1);
        printf("X2= %.2f\n",s.x2);
    }else if(delta==0){
        s.x1=s.x2=-b/(2*a);
        printf("X1=X2= %.2f",s.x1);
    }else if(delta<=0){
        printf("The equation has no root.");
    }
    return s;
}
int main(){
    int delta;
    int a,b,c;
    printf("Enter a :");scanf("%d",&a);
    printf("Enter b :");scanf("%d",&b);
    printf("Enter c :");scanf("%d",&c);
     root hi = solvequadratic(a,b,c);
   
}

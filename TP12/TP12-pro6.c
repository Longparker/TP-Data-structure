#include<stdio.h>
#include<math.h>
enum shape{
    Circle=1,Square,Triangle
};
void circle(float r){
    float A;
    A=2*3.14*r;
    printf("%f\n",A);
}
void square(float a){
    float A;
    A=pow(a,2);
    printf("%f\n",A);
}
void triangle(float h,float b){
    float A;
    A=h*b/2;
    printf("%f\n",A);
}

int main(){
    enum shape hi;
    float r,a,h,b;
    while(1){
        printf("Enter a valid number:");scanf("%d",&hi);
        switch(hi){
            case Circle:
            printf("Enter radius: ");scanf("%f",&r);
            circle(r);
            break;
            case Square:
            printf("Enter a: ");scanf("%f",&a);
            square(a);
            break;
            case Triangle:
            printf("Enter h: ");scanf("%f",&h);
            printf("Enter b: ");scanf("%f",&b);
            triangle(h,b);
            break;
            default:
            printf("Invalid\n");
        }
    }
}
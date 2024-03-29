#include<stdio.h>
#include<math.h>
typedef struct {
    float diameter,area,circumference;
}circledata;
circledata computecircledata(float r){
    circledata s;
    s.diameter = 2*r;
    s.area= 3.14*(pow(r,2));
    s.circumference = 2*3.14*r;
    return s;
}
int main(){
    float r;
    printf("Enter a number:");
    scanf("%f",&r);
    circledata circle = computecircledata(r);
    printf("The properties of a circle with the given radius %.2f are:\n",r);
    printf("Diameter =%f\n",circle.diameter);
    printf("Circumference =%f\n",circle.circumference);
    printf("Area =%f\n",circle.area);
}
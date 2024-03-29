#include<math.h>
int main(){
    int x,y;
    printf("Enter x :");
    scanf("%d",&x);
    printf("Enter y :");
    scanf("%d",&y);
    float f1 =2*x -3*pow(y,3)/2;
    float f2 =(pow(x,2)-3*y)/pow(2*x-1, (float)1/3);
    float f3_1 =pow(pow(x,3)-pow(y,2),(float)1/2);
    float f3_2 = (f3_1-3*y)/2;
    float f4 = sin(x)-3*cos(x)/2;
    printf("f1= %f\n",f1,x,y);
    printf("f2= %f\n",f2,x,y);
    printf("f3= %f\n",f3_2,x,y);
    printf("f4= %f\n",f4,x,y);
    return 0;

}
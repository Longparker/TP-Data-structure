#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    float Area;
    printf("Enter coordinate x and y of point A :");
    scanf("%d %d",&x1,&y1);
    printf("Enter coordinate x and y of point B :");
    scanf("%d %d",&x2,&y2);
    printf("Enter coordinate x and y of point C :");
    scanf("%d %d",&x3,&y3);
    Area=(float)1/2*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    printf("The area of triangle with point A(%d,%d),B(%d,%d),C(%d,%d) is %.2f square unit.\n",x1,y1,x2,y2,x3,y3,Area);
    if(Area<3){
        printf("It is a small triangle");
    }else if(Area>=3 &&Area<10){
        printf("It is a medium size triangle");
    }else if(Area>10){
        printf("It is a large triangle");
    }
    return 0;
}
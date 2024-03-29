#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,min;
    printf("Enter number : ");scanf("%d",&a);
    printf("Enter number : ");scanf("%d",&b);
    printf("Enter number : ");scanf("%d",&c);
    printf("Enter number : ");scanf("%d",&d);
    printf("Enter number : ");scanf("%d",&e);
    printf("Enter number : ");scanf("%d",&f);
    printf("Enter number : ");scanf("%d",&g);
    min=a;
    if(b< min){
        min=b;
   }
     if(c< min){
        min=c;
   }
    if(d< min){
        min=d;
   }
     if(e< min){
        min=e;
   }
     if(f< min){
        min=f;
   }
     if(g< min){
        min=g;
   }
   printf("The minumum number is %d",min);

}
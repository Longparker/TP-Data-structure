#include<stdio.h>
int main(){
int n1,n2,n3,n4,min;
    printf("Enter number :");scanf("%d,%d,%d,%d",&n1,&n2,&n3,&n4);
     min=n1;
    if(n2< min){
        min=n2;
   }
     if(n3< min){
        min=n3;
   }
    if(n4< min){
        min=n4;
   }
    printf("Among this four number(%d,%d,%d and %d),the smallest number is %d",n1,n2,n3,n4,min);
    
return 0;
}
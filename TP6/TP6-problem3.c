#include<stdio.h>
int main(){
    int n,m;
    int sum=0;
    printf("Input n:");scanf("%d",&n);
    printf("Input m:");scanf("%d",&m);
if(n>m){
        while(n>=m){
            if(n>m){
                printf("%d+",m);
            }else{
                printf("%d=",m);
            }
        
        sum=sum+m;
         m++;
    }
    printf("%d",sum);
}else{
    printf("oop! We can not compute the summation. n must be bigger than m.");
}
}
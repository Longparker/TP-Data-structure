#include<stdio.h.>
int main(){
    int n,m;
    int sum=0;
    printf("Enter m :");
    scanf("%d",&m);
    printf("Enter n :");
    scanf("%d",&n);
    do{
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
            printf("opp! we can't compute the summation.n must be greater than m");
        }
    }while(n>m);

}
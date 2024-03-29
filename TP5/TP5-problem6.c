#include<stdio.h>
int main(){
    int n,m,prime;
    printf("Enter n :");scanf("%d",&n);
    printf("Enter m :");scanf("%d",&m);
     printf("All prime numbers between %d and %d are: ",n,m);
   for(int i=n;i<=m;i++){
       prime = 1;
       for(int j=2;j*j<=i;j++){
           if(i%j==0){
               prime = 0;
               continue;
           }
       }
       if(prime){
           printf("%d ", i);
       }
   }
   return 0;
}

        


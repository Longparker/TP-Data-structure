#include<stdio.h>
#include<math.h>
int main(){
    int n;
    for ( int i=1;i<=10;i++){
        n =pow(2,i);
        printf("\n2^%d = %d",i,n);
    }
}
#include<stdio.h>
int main(){
    int n=1;
    printf("All even number between [22000] are: ");
    do{
         n++;
        if(n%2!=0){
            continue;
        }
        printf("%d ",n);

    }while(n<=22000);
}
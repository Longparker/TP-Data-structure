#include<stdio.h>
#include<time.h>
int main(){
    srand(time(0));
    int start=1, end=15;
    int n;
    int input;
    int count=0;
    n= rand()%end+start;
    printf("\n%d ",n);
    int num;
    while(num!=n){
        printf("\nEnter a guess number between 1-15 : ");scanf("%d",&num);
        count++;
        if(num!=n){
        printf("Not correct! Try to guess again");
        }
        else{
             printf("congratulation");
        }
        printf("\nyou have try %d time.",count);
    }
}
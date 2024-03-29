#include<stdio.h>
int main(){
    int ele[5];
    int i,j,k;
    printf("Input 5 element in the array in ascending order:\n");
    for(i=0;i<5;i++){
        printf("element-%d:",i);
        scanf("%d",&ele[i]);
    }
    printf("Input the position where to deleted:");
    scanf("%d",&ele[i]);
    for( i=k-1;i<=3;i++){
        ele[i]=ele[i+1];
    }
    printf("The new position is: ");
    for(i=0;i<=3;i++){
        printf("%d ",ele[i]);
    }
}
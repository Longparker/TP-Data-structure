#include<stdio.h>
int main(){
    int num[10];
    int i,j;
    for(i=0;i<10;i++){
        printf("Enter number #%d:",i+1);
        scanf("%d",&num[i]);
    }
     printf("\nAll input deta in the array are : ");
    for(j=0;j<10;j++){
        printf("%d",num[j]);
        if(j<9){
            printf(",");
        }else{
            printf(".");
        }
        
    }

}
   
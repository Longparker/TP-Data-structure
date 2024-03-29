#include<stdio.h>
int main(){
    int a1[5],a2[5];
    int i,j,k;
    printf("***Getting deta for the array a1\n");
    for(i=0;i<5;i++){
        printf("Enter number #%d:",i+1);
        scanf("%d",&a1[i]);
    }
     printf("\nAll data input by the users are stored successfully in the array a1.");
     printf("\nA new array a2 has been created and it has the same data as a1.");
     printf("\nDisplay a2 from start to end position :");
    for(j=0;j<5;j++){
        printf("%d",a1[j]);
        if(j<4){
            printf(",");
        }else{
            printf(".");
        }
        a2[j]=a1[j];
    }
     printf("\nDisplay a2 from end to start position:");
     for(k=4;k>=0;k--){
        printf("%d",a2[k]);
         if(j>4){
            printf(",");
        }else{
            printf(".");
        }
    }

}
   
#include<stdio.h>
int main(){
    char name[4][100];
    float score[4];
    char email[4][100];
    int age[4];
    for(int i=0;i<4;i++){
        printf("*** Getting data for student %d\n",i+1);
        printf("Enter name:");
        scanf("%s",&name[i]);
        printf("Enter score:");
        scanf("%f",&score[i]);
        printf("Enter email:");
        scanf("%s",&email[i]);
        printf("Enter age:");
        scanf("%d",&age[i]);
    }
    printf("\nAll deta of student in the array are:");
     printf("\nName\tAge\tScore\t   Email\t");
    for(int j=0;j<4;j++){
        printf("\n%s\t%d\t%f\t%s",name[j],age[j],score[j],email[j]);
    }
} 
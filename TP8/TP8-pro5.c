#include<stdio.h>
int main(){
    char name[5][100];
    float score[5];
    char email[5][100];
    int age[5];
    float avg;
    int sum=0;
    int count=0;
    for(int i=0;i<5;i++){
        printf("Input for student %d :",i+1);
        scanf("%s",&name[i]);
        scanf("%d",&age[i]);
        scanf("%f",&score[i]);
        scanf("%s",&email[i]);
            sum=sum+score[i];
            count++;
            avg=sum/count;
    }
     printf("\nThe average score is %f",avg);
     printf("\nAll deta of student in the array are:");
     printf("\nName\tAge\tScore\t   Email\t");
    for(int j=0;j<5;j++){
        if(score[j]>avg){
        printf("\n%s\t%d\t%f\t%s",name[j],age[j],score[j],email[j]);
        }
    }
}
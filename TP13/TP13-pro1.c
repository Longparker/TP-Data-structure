#include<stdio.h>
struct student{
    char name[20],grade[1];
    int rollnumber,age;
};
void displayarray(struct student b[],int n){
    printf("Name\t\tRoll number\tAge\tGrade\n");
    for(int i=0;i<=n;i++){
        printf("%s\t\t%d\t\t%d\t%s\n",b[i].name,b[i].rollnumber,b[i].age,b[i].grade);
    }
};
int main(){
    struct student s[4];
    int n;
    printf("Enter number of student:");scanf("%d",&n);
    for(int i=0;i<=n;i++){
    printf("Student#%d\n",i+1);
    printf("Enter student name: ");scanf("%s",&s[i].name);
    printf("Enter roll number: ");scanf("%d",&s[i].rollnumber);
    printf("Enter student age: ");scanf("%d",&s[i].age);
    printf("Enter grade: ");scanf("%s",&s[i].grade);
    }
     displayarray(s,n);
}
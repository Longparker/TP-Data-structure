#include<stdio.h>
struct Employee{
    int id;
    char designation[10];
    char name[20];
    float salary;
    
};
void displayarray(struct Employee hi[],int size){
    printf("Name\t\tID\t\tDesignation\t\tSalary\n");
    for(int i=0;i<=size;i++){
        printf("%s\t\t%d\t\t%s\t\t\t%f\n",hi[i].name,hi[i].id,hi[i].designation,hi[i].salary);
    }
};
int max(struct Employee hello[],int size){
    float max=hello[0].salary;
    for(int i=0;i<=size;i++){
        if(hello[i].salary>max){
            max=hello[i].salary;
            max=i;
        }
    }
        printf("Employee who has higest salary is\n");
        printf("Name\t\tID\t\tDesignation\t\tSalary\n");
    for(int i=0;i<=size;i++){
        printf("%s\t\t%d\t\t%s\t\t\t%f\n",hello[i].name,hello[i].id,hello[i].designation,hello[i].salary);
         break;
    }
    return max;
};
float average(struct Employee hi[],int size){
    float sum=0;
    float avg;
    int count=0;
    for(int i=0;i<=size;i++){
        sum=sum+hi[i].salary;
        count++;
        avg=sum/count;
    }
    printf("Average salary is %f\n",avg);
    return avg;
}
int main(){
    int n;
    struct Employee hi[4];
    printf("Enter Number of Employee:");scanf("%d",&n);
    for(int i=0;i<=n;i++){
    printf("Employee#%d\n",i+1);
    printf("Enter name:");scanf("%s",&hi[i].name);
    printf("Enter  ID:");scanf("%d",&hi[i].id);
    printf("Enter Designation:");scanf("%s",&hi[i].designation);
    printf("Enter salary:");scanf("%f",&hi[i].salary);
    }
    displayarray(hi,n);
    max(hi,n);
    average(hi,n);
}
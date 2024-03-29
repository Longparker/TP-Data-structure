#include<stdio.h>
int main(){
    int choice;
    int id,delid;
    char name,gender;
    int i,j,k;
    while(1){
        printf("---------------------\n");
        printf("Student mangaement system\n");
        printf("1.Add a new student \n");
        printf("2.Delete a student  by ID\n");
        printf("3.Display all student\n");
        printf("4.Exit\n");
        printf("Enter your choice :");
        scanf("%d",&choice);
        printf("-----------------------\n");
        if(choice==1){
            printf("1.Add a new student \n");
                printf("Enter student id :");
                scanf("%d",&id);
                printf("Enter student name :");
                scanf("%s",&name);
                printf("Enter student gender(male/female) :");
                scanf("%s",&gender);
            printf("Student Added succeccfully.\n");
            
        }else if(choice==2){
            printf("2.Delete a student  by ID\n");
                printf("Enter student id to delete:");
                scanf("%d",&delid);
                if(delid==id){
                    printf("Student deleted successfully.\n");
                    break;
                }else{
                    printf("student isn't exist.\n");
                }
        }else if(choice==3){
            printf("3.Display all student\n");
            printf("ID\tNAME\tGENDER");
            printf("\n%d\t%s\t%s\n",id,name,gender);
        }else if(choice==4){
            printf("Bye bye!!");
            break;
        }else{
            printf("Please enter number form 1-4");
        }
    }
}
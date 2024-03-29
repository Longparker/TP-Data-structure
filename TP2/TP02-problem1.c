#include<stdio.h>
int main(){
    char name[20];
     printf("Enter name ");
    scanf("%s",&name);
    int year;
    printf("Enter year :");
    scanf("%d",&year);
    char dep[50];
    printf("Enter department ");
    scanf("%s",&dep);
    printf("Hello everyone!");
     printf("My name is %s\n", name);
     printf("i am in year %d\n",year);
     printf("i am department %s\n",dep);
     printf("welcome to C programming.");
 
    return 0;
}
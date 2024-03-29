#include<stdio.h>
#include<string.h>
int main(){
    char inputpw[20];
    char pw[]="pass$123";
    do{
        printf("Enter password:");
        scanf("%s",&inputpw);
        if (strcmp(inputpw, pw) == 0) {
            printf("Correct password!! Access granted.\n"); 
            break;
        } else {
            printf("Incorrect password.Try again!!\n");
        }
    }while(1);
}
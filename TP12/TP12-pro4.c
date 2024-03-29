#include<stdio.h>
typedef enum {
    A='A',B='B',C='C',D='D',F='F'
}grade;
int main(){
    while(1){
        char hi;
        printf("Enter grade: ");scanf(" %c",&hi);
       // printf("%c",hi);
        switch(hi){
            case (A):
            printf("Excellent\n");
            break;
            case (B):
            printf("Very Good\n");
            break;
            case (C):
            printf("Good\n");
            break;
            case (D):
            printf("Soso\n");
            break;
            case (F):
            printf("Fail\n");
            break;
            default:
            printf("Invalid\n");
            break;
        }
    }
}
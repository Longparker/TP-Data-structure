#include<stdio.h>
#include<string.h>
int main(){
    char fn[20];
    char ln[20];
    char full[20];
    printf("Enter first name :");
    scanf("%s",&fn);
    printf("Enter last name :");
    scanf("%s",&ln);
    strcpy(full , fn);
    strcat(full , "_");
    strcat(full , ln);
    int fname;
    fname = strlen(fn);
    int lname;
    lname = strlen(ln);
    char stringlen =strlen(fn);
    char l = ln[0];
    char f = fn[stringlen-1];
    printf("A) Concatenation between first name and last name is %s\n",full);
    printf("B) Total characters of first name is %d and total characters of last name is %d.\n",fname,lname,strlen(fn),strlen(ln));
    printf("C) First character of the last name is %c and the last character of the first name is %c",l,f);
    return 0;
}

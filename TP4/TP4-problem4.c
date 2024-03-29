#include<stdio.h>
int main(){
    char word[20];
    int len ;

    printf("Enter a string: ");
    scanf("%s",&word);
    strlen(word);

    if(len==3){
        if(word[0]==word[strlen(word)-1]){
            printf("The word %s is  a palindrome", word);
        }
    }else if (len==5){
        if(word[1]==word[strlen(word)-2]){
            printf("The word %s is a palindrome", word);
        }
    }else if(len==7){
        if(word[2]==word[strlen(word)-3]){
            printf("The word %s is a palindrome", word);
        }
    }else{
    printf("The word %s is  a not palindrome", word);}
    return 0;
    }


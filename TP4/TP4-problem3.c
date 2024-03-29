#include<stdio.h>
int main(){
char player1[10], player2[10];

printf("Player1:");
scanf("%s", &player1);
printf("Player2:");
scanf("%s", &player2);
if((strcmp(player1,"rock")==0 && strcmp(player2,"scissor")==0) || (strcmp(player1,"paper")==0
    && strcmp(player2,"rock")==0) || (strcmp(player1,"sicssor")==0 && strcmp(player2,"paper")==0) ){
    printf("Player 1 won");
}else if((strcmp(player2,"rock")==0 && strcmp(player1,"scissor")==0) || (strcmp(player2,"paper")==0
    && strcmp(player1,"rock")==0) || (strcmp(player2,"sicssor")==0 && strcmp(player1,"paper")==0) ){
    printf("Player 2 won");
}else{
    printf("Player 1 and Player 2 are equal because they have the same");
    }
 return 0;   
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game(int r){

 if(r==0){
  printf("tiger\n");
 }
 else if(r==1){
  printf("fish\n");
 }
 else if(r==2){
  printf("crab\n");
 }
 else if(r=3){
  printf("chicken\n");
 }
 else if(r==4){
  printf("shrimp\n");
 }
 else if(r==5){
  printf("gourd\n");
 }
}
int main(){
    char jak;
    char luy[20];
    printf("jak ey 1 :");scanf("%s,%s",&luy,&jak);
       
    printf("jak ey 3 :");scanf("%s",&luy,&jak);
    printf("jak ey 4 :");scanf("%s",&luy,&jak);
    printf("jak ey 5 :");scanf("%s",&luy,&jak);
    printf("jak ey 6 :");scanf("%s",&luy,&jak);
    printf("jak ey 7 :");scanf("%s",&luy,&jak);
    printf("jak ey 8 :");scanf("%s",&luy,&jak);

   ;


 srand(time(NULL));
 printf("The result is U_U:\n");
 int r1=rand()%6;
 int r2=rand()%6;
 int r3=rand()%6;


 game(r1);
 game(r2);
 game(r3);

}

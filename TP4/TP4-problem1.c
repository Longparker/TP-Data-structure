#include<stdio.h>
int main(){
    int year,month,day;
    printf("imput date (yyyy-mmm-dd) :");scanf("%d-%d-%d",&year,&month,&day);
    if(year>=1 && year<=2024){
     if(month==1 || month==3 || month==5 || month==7 || month==9 || month==11){
        if(day>=1 &&day<=30){
        printf("The date is valid\n");
        }
        else{
        printf("The date is not valid\n");
        }
    }else if( month==4 || month==6 || month==8 ||month==10||month==12){
        if(day>=1 && day<=31){
        printf("The date is valid\n");
        }
        else{
        printf("The date is not valid\n");
        }
    }else if(month==2){
        if(year%4==0){
        if(day>=1 &&day<=29){
            printf("'The date is valid\n");
        }else{
            printf("The date is not valid\n"); 
        }
        }else{
        if(day>=1 &&day<=28){
            printf("The date is valid\n");
        }else{
        printf("The date is not valid\n");
        }
        }
    }
    }
    return 0;
}
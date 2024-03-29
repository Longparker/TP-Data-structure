#include<stdio.h>
int main(){
    float math,eng,com,average;
    printf("Enter math score :");
    scanf("%f",&math);
    printf("Enter english score :");
    scanf("%f",&eng);
    printf("Enter langangue score :");
    scanf("%f",&com);
    average= (math+eng+com)/3;
    printf("Average score is %f\n",average);
    if(average>=86 &&average<=100){
        printf("The student get grade A");
    }else if(average>=81 &&average<=85){
        printf("The student get grade B");
    }else if(average>=70 &&average<=80){
        printf("The student get grade C");
    }else if(average>=61 &&average<=69){
        printf("The student get grade D");
    }else if(average>=50 &&average<=60){
        printf("The student get grade E");
    }else if(average<50){
        printf("The student get grade f");
    }
    return 0;
}
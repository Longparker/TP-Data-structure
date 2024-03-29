#include<stdio.h>
enum monthsofyear{
    January=1,February,March,April,May,June,July,August,September,October,November,December
};
int main(){
    enum monthsofyear month;
    while(1){
        printf("Enter a number from 1-12 :");scanf("%d",&month);
        switch(month){
            case January:
            printf("January\n");
            break;
            case February:
            printf("February\n");
            break;
            case March:
            printf("March\n");
            break;
            case April:
            printf("April\n");
            break;
            case May:
            printf("May\n");
            break;
            case June:
            printf("June\n");
            break;
            case July:
            printf("July\n");
            break;
            case August:
            printf("August\n");
            break;
            case September:
            printf("September\n");
            break;
            case November:
            printf("November\n");
            break;
            case December:
            printf("December\n");
            break;
            default :
            printf("plz enter valid number from 1-12\n");
            break;
        }
    }
}
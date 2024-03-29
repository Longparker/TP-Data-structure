#include<stdio.h>
enum dayofweek{
    MONDAY =1,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY
};
int main(){
    enum dayofweek day;
    while(1){
    printf("Enter a valid number. 1-Monday,2-Tuesday...:");scanf("%d",&day);
    switch (day) {
    case MONDAY:
        printf("MONDAY\n");
        break;
    case TUESDAY:
        printf("TUESDAY\n");
        break;
    case WEDNESDAY:
        printf("WEDNESDAY\n");
        break;
    case THURSDAY:
        printf("THURSDAY\n");
        break;
    case FRIDAY:
        printf("FRIDAY\n");
        break;
    case SATURDAY:
        printf("SATURDAY\n");
        break;
    case SUNDAY:
        printf("SUNDAY\n");
        break;
    default:
        printf("please enter valid number from 1-7");
        break;
    
    }
}
}
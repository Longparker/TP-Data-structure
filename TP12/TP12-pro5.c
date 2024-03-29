#include<stdio.h>
enum trafficlight{
    Red=1,Yellow,Green
};
int main(){
    enum trafficlight hi;
    printf("Enter a valid number:");
    scanf("%d",&hi);
    switch(hi){
        case Red:
        printf("\033[1;31m Stop!!\033[0m\n");
        break;
        case Yellow:
        printf("\033[1;33m Prepare to stop!!\033[0m\n");
        break;
        case Green:
        printf("\033[1;32m Goo!\033[0m\n");
        break;
        default:
        printf("Invalid\n");
        break;
    }
}

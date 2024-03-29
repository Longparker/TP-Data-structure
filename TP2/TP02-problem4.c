#include<math.h>
int main(){
    int hour,min,sec;
    printf("Enter hour :");
    scanf("%d",&hour);
     printf("Enter minute :");
    scanf("%d",&min);
     printf("Enter second:");
    scanf("%d",&sec);
    int time = ((hour*3600) + (min*60) +sec);
    printf("The above time equal %d seconds",time);
    return 0;
}
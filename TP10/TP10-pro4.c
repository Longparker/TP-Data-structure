#include<stdio.h>
#include<math.h>
typedef struct{
    int min,max
}minmax;
minmax myminmax(int num[]){
    minmax s;
    s.max=s.min=num[0];
    for(int i=0;i<10;i++){
        if(num[i]>s.max){
            s.max=num[i];
        }
    }
    for(int j=0;j<10;j++){
        if(num[j]<s.min){
            s.min=num[j];
        }
    }
    return s;
}
int main(){
    int num[10];
    int i;
    printf("Enter number:");
    for ( i=0;i<10;i++){
        scanf("%d", &num[i]);
    }
    minmax circle= myminmax(num);
     printf("Among the input numbers (");
    for( i=0;i<10;i++){
        printf("%d ",num[i]);
    }
     printf(") we found that :\n");
    printf("The minimum number is %d and the maximum number is %d",circle.min,circle.max);
}
    
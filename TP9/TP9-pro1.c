#include<stdio.h>
int main(){
    int size;
    int secondmax,max,i;
    printf("Input the size of array: ");
    scanf("%d",&size);
    if (size <= 1) {
        printf("Array size should be greater than 1.\n");
    }
    int arr[size];
    printf("\nInput %d numbers in the array :\n",size);
    for( i=1;i<=size;i++){
        printf("Enter number #%d :",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=size;i++){
        max=arr[0];
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    for(i=0;i<=size;i++){
        if(arr[i]!=max){
            secondmax=arr[0];
            if(arr[i]>=secondmax){
                secondmax=arr[i];
            }
        }
    }
     printf("The second largest number in the array is: %d\n",secondmax);

    return 0;
}
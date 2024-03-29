#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void primenumber(int num){
    int countprime=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            countprime++;
        }
    }
    if(countprime==2){
        printf("The number %d is prime number\n",num);
    }else{
        printf("The number %d is not prime number\n",num);
    }
}
void displayevenodd(int n,int m){
     printf("All odd number from 1-%d are:",n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
     printf("\nAll even number from 1-%d are:",m);
    for(int j=1;j<=m;j++){
        if(j%2==0){
            printf("%d ",j);
        }
    }
}
void displayprime(int m,int n){
    //int prime=1;
    printf("All primes numbers between %d and %d are:",m,n);
     
     for(int j=m;j<=n;j++){
        int prime=1;
        for(int i=2;i<=j;i++){
            if(n%i==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            if(j!=1){
                printf("%d ",j);
            }
        }
    }
}
float computesuite(int n){
    float sum=0;
    for(int i=1;i<=n;i++){
    sum=sum+1/pow(i,2);
    }
    return sum;
}
int main(){
    char choice;
    int num,prime;
    int n,m;
    int nC,mC;
    int nD;
    printf("/......*Program menu:.........*/\n");
    printf("a-Tell a user whether a number is Prime number\n");
    printf("b-Display all odd numbers from 1 to n and display all even numbers from 1 to m\n");
    printf("c-Display all prime numbers between n and m\n");
    printf("d-Compute summation of a suite:\n");
    printf("e-Exit program\n");
    printf(".....*****......");
     printf("\nEnter a choice:");
    while(1){
    scanf("%c",&choice);
        if(choice == 'a'){
            printf("a-Tell a user whether a number is Prime number\n");
            while(1){
            printf("Enter a number:");scanf("%d",&num);
            primenumber(num);
            }
        }
        else if(choice =='b'){
            printf("b-Display all odd numbers from 1 to n and display all even numbers from 1 to m\n");
            printf("Enter n:");
            scanf("%d",&n);
            printf("Enter m:");
            scanf("%d",&m);
            displayevenodd(n,m);
            
        }
        else if(choice =='c'){
            printf("c-Display all prime numbers between n and m\n");
            printf("Enter m:");scanf("%d",&mC);
            printf("Enter n:");scanf("%d",&nC);
            displayprime(mC,nC);
        }
        else if(choice =='d'){
             printf("d-Compute summation of a suite:\n");
             printf("Enter n:");scanf("%d",&nD);
             float suite=computesuite(nD);
             printf("%f",suite);
        }
        else if(choice =='e'){
            printf("e-Exit program");
            printf("bye bye!!");
            break;
        }
    }
}
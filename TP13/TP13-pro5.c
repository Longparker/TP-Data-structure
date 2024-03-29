#include<stdio.h>

struct Account{
float balance;
int accountnumber;
char accountname[20];
char accounttype;
};

float Deposit(float balance, float deposit){

    balance = balance + deposit;

    return balance;

}
float Withdrawal(float balance, float withrawal){
    if(balance>withrawal){
        balance=balance-withrawal;
    }else if(balance<withrawal){
        printf("you don't have enough money.!!\n");
    }
    return balance;
}
int main(){
  struct Account a;

  a.balance= 0;
    int choice;
  float deposit;
  float withdrawal;
  printf("Enter account number:");scanf("%d",&a.accountnumber);
    printf("Enter account name:");scanf("%s",&a.accountname);
    printf("Enter account type:"),scanf("%s",&a.accounttype);
  while(choice!=4){
        printf("Enter Operation: ");
        scanf("%d", &choice);
    if(a.accounttype=='R'){
        if(choice==1){
            printf("Deposit\n");
            printf("Enter Riel ammount: ");
            scanf("%f", &deposit);

         a.balance = Deposit(a.balance, deposit);

        }
        if(choice==2){
            printf("Withdrawal\n");
            printf("Enter withdrawal ammount:");
            scanf("%f",&withdrawal);
         a.balance =Withdrawal(a.balance,withdrawal);
        }

        if(choice==3){
        printf("Balance inquiry\n");
        printf("You have %f Riel in your account\n", a.balance);
        }
  }else if(a.accounttype=='U'){
    if(choice==1){
            printf("Deposit\n");
            printf("Enter USD ammount: ");
            scanf("%f", &deposit);

         a.balance = Deposit(a.balance, deposit);

        }
        if(choice==2){
            printf("Withdrawal\n");
            printf("Enter withdrawal ammount:");
            scanf("%f",&withdrawal);
         a.balance =Withdrawal(a.balance,withdrawal);
        }

        if(choice==3){
        printf("Balance inquiry\n");
        printf("You have %f $ in your USD account\n", a.balance);
        }
    }
   

}
}
#include<stdio.h>
struct Account{
    enum AccountNumber{
    menglong =123456,bunhap=234567,ketta=345678,lyline=456789
    };
    float balance;
    char Accounttype;
};
enum operation{
    Deposit=1,Withdrawal,Balance,finalbalance
};
int main(){
    //U represent USD and R represent Riel
    // 1-deposit,2-withdrawal,3-balance,4-finalbalance after withdrawal.
    //  there are four Account such as menglong =123456,bunhap=234567,ketta=345678,lyline=456789.
    float depositmoney1U,depositmoney2U,depositmoney3U,depositmoney4U;
    float depositmoney1R,depositmoney2R,depositmoney3R,depositmoney4R;
    float withdrawal1U,withdrawal2U,withdrawal3U,withdrawal4U;
    float withdrawal1R,withdrawal2R,withdrawal3R,withdrawal4R;
    float balanceU,balanceR; 
    enum operation hi;
    struct Account bonjour;
    while(1){
        balanceU =depositmoney1U,depositmoney2U,depositmoney3U,depositmoney4U;
    printf("Enter operation: ");scanf("%d",&hi);
    switch(hi){
        case Deposit:
        printf("Deposit\n");
        enum AccountNumber hello;
        printf("Enter AccountNumber:");scanf("%d",&hello);
        switch(hello){
            case menglong:
            printf("Account name : Menglong\n");
            printf("Enter Account type:");scanf("%s",&bonjour.Accounttype);
            if(bonjour.Accounttype=='U'){
                printf("Enter USD balance:");scanf("%fUSD",&depositmoney1U);
                printf("Your money has been deposit Successfully\n");
            break;
            }else if(bonjour.Accounttype=='R'){
                printf("Enter RIEL balance:");scanf("%fRIEL",&depositmoney1R);
                printf("Your money has been deposit Successfully\n");
            break;
            }
            case bunhap:
            printf("Account name : Bunhap\n");
            printf("Enter Account type:");scanf("%s",&bonjour.Accounttype);
            if(bonjour.Accounttype=='U'){
                printf("Enter USD balance:");scanf("%fUSD",&depositmoney2U);
                printf("Your money has been deposit Successfully\n");
            break;
            }else if(bonjour.Accounttype=='R'){
                printf("Enter RIEL balance:");scanf("%fRIEL",&depositmoney2R);
                printf("Your money has been deposit Successfully\n");
            break;
            }
            case ketta:
            printf("Account name : Ketta\n");
            printf("Enter Account type:");scanf("%s",&bonjour.Accounttype);
            if(bonjour.Accounttype=='U'){
                printf("Enter USD balance:");scanf("%fUSD",&depositmoney3U);
                printf("Your money has been deposit Successfully\n");
            break;
            }else if(bonjour.Accounttype=='R'){
                printf("Enter RIEL balance:");scanf("%fRIEL",&depositmoney3R);
                printf("Your money has been deposit Successfully\n");
            }else{
                printf("Invalid\n");
            break;
            }
            case lyline:
            printf("Account name : Lyline\n");
            printf("Enter Account type:");scanf("%s",&bonjour.Accounttype);
            if(bonjour.Accounttype=='U'){
                printf("Enter USD balance:");scanf("%fUSD",&depositmoney4U);
                printf("Your money has been deposit Successfully\n");
            break;
            }else if(bonjour.Accounttype=='R'){
                printf("Enter RIEL balance:");scanf("%fRIEL",&depositmoney4R);
                printf("Your money has been deposit Successfully\n");
            break;
            }
            default:
            printf("Invalid\n");
        }
        break;
         case Withdrawal:
        printf("Withdrawal\n");
        printf("Enter AccountNumber:");scanf("%d",&hello);
        switch(hello){
            case menglong:
            printf("Account name : Menglong\n");
            printf("Enter Account type\n");scanf("%s",&bonjour.Accounttype);
            if(bonjour.Accounttype=='U'){
                 printf("Enter USD balance you want to withdrawal:");scanf("%f",&bonjour.balance);
                 withdrawal1U = depositmoney1U - bonjour.balance;
                 if(balanceU>bonjour.balance){
                    printf("You have withdrawal %f from your USD account\n",bonjour.balance);
                }else if (balanceU<bonjour.balance){
                    printf("Luy ot krob te ah poy\n");
            }
            break;
            }else if(bonjour.Accounttype=='R'){
                printf("Enter USD balance you want to withdrawal:");scanf("%f",&bonjour.balance);
                withdrawal1R = depositmoney1R - bonjour.balance;
                 if(balanceR>bonjour.balance){
                     printf("You have withdrawal %f from your RIEL account\n",bonjour.balance);
            }else if (balanceR<bonjour.balance){
                     printf("Luy ot krob te ah poy\n");
            }
            break;
            }
            case bunhap:
            printf("Account name : Bunhap\n");
            printf("Enter Account type\n");scanf("%s",&bonjour.Accounttype);
            if(bonjour.Accounttype=='U'){
                 printf("Enter USD balance you want to withdrawal:");scanf("%f",&bonjour.balance);
                 withdrawal2U = depositmoney2U - bonjour.balance;
                 if(balanceU>bonjour.balance){
                    printf("You have withdrawal %f from your USD account\n",bonjour.balance);
                }else if (balanceU<bonjour.balance){
                    printf("Luy ot krob te ah poy\n");
            }
            break;
            }else if(bonjour.Accounttype=='R'){
                printf("Enter USD balance you want to withdrawal:");scanf("%f",&bonjour.balance);
                withdrawal2R = depositmoney2R - bonjour.balance;
                 if(balanceR>bonjour.balance){
                     printf("You have withdrawal %f from your RIEL account\n",bonjour.balance);
            }else if (balanceR<bonjour.balance){
                     printf("Luy ot krob te ah poy\n");
            }
            break;
            }
            case ketta:
            printf("Account name : Ketta\n");
            printf("Enter Account type\n");scanf("%s",&bonjour.Accounttype);
            if(bonjour.Accounttype=='U'){
                 printf("Enter USD balance you want to withdrawal:");scanf("%f",&bonjour.balance);
                 withdrawal3U = depositmoney3U - bonjour.balance;
                 if(balanceU>bonjour.balance){
                    printf("You have withdrawal %f from your USD account\n",bonjour.balance);
                }else if (balanceU<bonjour.balance){
                    printf("Luy ot krob te ah poy\n");
            }
            break;
            }else if(bonjour.Accounttype=='R'){
                printf("Enter USD balance you want to withdrawal:");scanf("%f",&bonjour.balance);
                withdrawal3R = depositmoney3R - bonjour.balance;
                 if(balanceR>bonjour.balance){
                     printf("You have withdrawal %f from your RIEL account\n",bonjour.balance);
            }else if (balanceR<bonjour.balance){
                     printf("Luy ot krob te ah poy\n");
            }
            break;
            }
            case lyline:
            printf("Account name : Lyline\n");
            printf("Enter Account type\n");scanf("%s",&bonjour.Accounttype);
            if(bonjour.Accounttype=='U'){
                 printf("Enter USD balance you want to withdrawal:");scanf("%f",&bonjour.balance);
                 withdrawal4U = depositmoney4U - bonjour.balance;
                 if(balanceU>bonjour.balance){
                    printf("You have withdrawal %f from your USD account\n",bonjour.balance);
                }else if (balanceU<bonjour.balance){
                    printf("Luy ot krob te ah poy\n");
            }
            break;
            }else if(bonjour.Accounttype=='R'){
                printf("Enter USD balance you want to withdrawal:");scanf("%f",&bonjour.balance);
                withdrawal4R = depositmoney4R - bonjour.balance;
                 if(balanceR>bonjour.balance){
                     printf("You have withdrawal %f from your RIEL account\n",bonjour.balance);
            }else if (balanceR<bonjour.balance){
                     printf("Luy ot krob te ah poy\n");
            }
            break;
            }
            default:
            printf("Invalid\n");
        }
        break;
        case Balance:
        printf("Balance\n");
        printf("Enter AccountNumber:");scanf("%d",&hello);
        switch(hello){
            case menglong:
            printf("Account name : Menglong\n");
            printf("Your have %f in your USD Account.\n",depositmoney1U);
            printf("Your have %f in your RIEL Account.\n",depositmoney1R);
            break;
            case bunhap:
            printf("Account name : Bunhap\n");
            printf("Your have %f in your USD Account.\n",depositmoney2U);
            printf("Your have %f in your RIEL Account.\n",depositmoney2R);
            break;
            case ketta:
            printf("Account name : Ketta\n");
            printf("Your have %f in your USD Account.\n",depositmoney3U);
            printf("Your have %f in your RIEL Account.\n",depositmoney3R);
            break;
            case lyline:
            printf("Account name : Lyline\n");
            printf("Your have %f in your USD Account.\n",depositmoney4U);
            printf("Your have %f in your RIEL Account.\n",depositmoney4R);
            break;
            default:
            printf("Invalid\n");
        }
        break;
         case finalbalance:
        printf("Final Balance\n");
        printf("Enter AccountNumber:");scanf("%d",&hello);
        switch(hello){
            case menglong:
            printf("Account name : Menglong\n");
            printf("Your have %f in your USD Account.\n",withdrawal1U);
            printf("Your have %f in your RIEL Account.\n",withdrawal1R);
            break;
            case bunhap:
            printf("Account name : Bunhap\n");
            printf("Your have %f in your USD Account.\n",withdrawal2U);
            printf("Your have %f in your RIEL Account.\n",withdrawal2R);
            break;
            case ketta:
            printf("Account name : Ketta\n");
            printf("Your have %f in your USD Account.\n",withdrawal3U);
            printf("Your have %f in your RIEL Account.\n",withdrawal3R);
            break;
            case lyline:
            printf("Account name : Lyline\n");
            printf("Your have %f in your USD Account.\n",withdrawal4U);
            printf("Your have %f in your RIEL Account.\n",withdrawal4R);
            break;
            default:
            printf("Invalid\n");
        }
        break;
        default:
        printf("Invalid\n");
        break;
       
    }
    }
    return 0;
}

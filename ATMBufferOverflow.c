#include<stdio.h>
#include<conio.h>
#include<string.h>
int authentication(void);
int deposit();
int withdraw();
void checkbalance(int balance);

int balance=300;
int options;
int receipt;

int main(void)
{
    char pipe[5];
    int secret;
    printf("\n Enter the password \n");
    gets(pipe);
    if((strcmp(pipe,"1234"))==0)
    {
        printf("\n Corect Password");
        secret=1;
    }
    else
    {
        printf("wrong");
        
    }
    if (secret)
    {
        printf("\n Root access is given to the user");
        printf("Choose from the following options \n 1.Deposit \n 2.Withdraw \n 3.Check Balance");
        scanf("%d", &options);
        while(options<=3)
        {
        switch(options)
        {
            case 1:
            deposit();
            break;
            
            case 2:
            withdraw(balance);
            break;
            
            case 3:
            checkbalance(balance);
            break;
        }
        }
        printf("Would you like to print a receipt\n");
        scanf("%d", &receipt);
    }
    
}

int deposit()
{
    int depositAmount;
    printf("Enter the amount you like to deposit");
    scanf("%d", &depositAmount);
    balance += depositAmount;
    return balance;
}

int withdraw()
{
    int withdrawAmount;
    printf("Enter the amount to withdraw");
    scanf("%d", &withdrawAmount);
    balance -= withdrawAmount;
    return balance;
}

void checkbalance(int balance)
{
    printf("The available balance is \n", &balance);
    
}
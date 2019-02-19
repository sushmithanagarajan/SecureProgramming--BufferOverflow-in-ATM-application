#include<stdio.h>
#include<string.h>
int authentication(void);
int deposit();
int withdraw();
void checkbalance(int balance);

int balance=0;
int options=0;
int receipt;

int authentication()
{
    int secret=0;
    char pipe[5];
    printf("\n Enter the password \n");
    gets(pipe);
    if((strcmp(pipe,"1234"))==0)
    {
        printf("\n Correct Password \n");
        secret=1;
    }
    else
    {
        printf("\n Wrong Password \n");
    }
return secret;

}

int main(void)
{
    int status=authentication();
    if (status)
    {
        
       printf("\n Root Access given to the user \n");
	 while(options<=4){
	printf("\n ****************ATM Transactions************** \n");
        printf("\n Choose from the following options \n 1.Deposit \n 2.Withdraw \n 3.Check Balance\n 4.Exit");
        scanf("%d", &options);
        switch(options)
        {
            case 1:
            balance=deposit();
            break;
            
            case 2:
            balance=withdraw();
            break;
            
            case 3:
            checkbalance(balance);
            break;
		
	    case 4: exit(0);
        }
        }
    
        printf("\n Would you like to print a receipt\n");
        scanf("%d", &receipt);
    }
return 0;
    
}

int deposit()
{
    int depositAmount;
    printf("\n Enter the amount you like to deposit\n");
    scanf("%d", &depositAmount);
    balance += depositAmount;
    return balance;
}

int withdraw()
{
    int withdrawAmount;
    printf("\n Enter the amount to withdraw \n");
    scanf("%d", &withdrawAmount);
    balance -= withdrawAmount;
    return balance;
}

void checkbalance(int balance)
{
    printf("\n The available balance is \n %d", balance);
    
}

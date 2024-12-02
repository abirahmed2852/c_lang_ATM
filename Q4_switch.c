#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char pin[20],acc[20];
    int bal, choise, amt, dep;
    printf("Enter your account number\n");
    scanf("%s", &acc);
    printf("Enter your pin\n");
    scanf("%s", &pin);

    if (strcmp(acc,"7489571967")==0 && strcmp(pin,"7489")==0|| strcmp(acc,"6263000906")==0
     && strcmp(pin,"6263")==0|| strcmp(acc,"9993903012")==0  && strcmp(pin,"9993")==0)
    
    {
        printf("Enter you current bank balance\n");
        scanf("%i", &bal);
        system("cls");
        printf("I am a bot, i can perform these task for you\n");
        printf("1) print balance\n");
        printf("2) withdrawal\n");
        printf("3) deposit\n");
        printf("4) print receipt\n\n");
        printf("Enter Choise:");
        scanf("%i", &choise);
    switch (choise)
    {
    case 1:
        system("cls");
        printf("Your current balance is %i", bal);
        break;
    case 2:
        system("cls");
        printf("Enter Amount\n");
        scanf("%i", &amt);
        if (amt > bal)
        {
            printf("You'r balance is exceed");
        }
        else
        {
            printf("Your withdrawal amount is %i\n\n", amt);
            printf("Now your current balance is %i", bal - amt);
        }
        break;
    case 3:
        system("cls");
        printf("Enter your deposite amount\n");
        scanf("%i", &dep);
        printf("Your deposited amount is %i\n\n", dep);
        printf("Now current balance is %i", bal + dep);
        break;
    case 4:
        system("cls");
        printf("Your balance is %i\n\n", bal);
        printf("    ****it's your softcopy receipt****    ");
        break;
    
    default:
        printf("Invalid Choise");
        break;
    }
    }
    else
    {
        printf("Wrong Account number or pin,please try again\n");
    }
    return 0;
}

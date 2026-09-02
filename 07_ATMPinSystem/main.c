#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pin=1881;
    int userPin;
    int test=0;

    do
    {
        printf("Please you can enter pin: ");
        if(scanf("%d",&userPin)!=1)
        {
            printf("Please can't enter letter");
            break;
        }
        if(userPin==pin)
        {
            printf("Access Granted");

        }
        else
        {
            test++;
            printf("You entered it incorrectly: %d\n",test);

        }
    }while(userPin!=pin && test!=3);

    printf("Account Blocked");



    return 0;
}

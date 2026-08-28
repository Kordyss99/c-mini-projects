#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int balance,multiplier,adjustment;
    int product,newBalance;

    printf("Balance: ");
    if(scanf("%d",&balance)!=1)
    {
        printf("Error: Entered a letter");
        return 1;
    }


    printf("Multiplier: ");
    if(scanf("%d",&multiplier)!=1)
    {
        printf("Error: Entered a letter");
        return 1;
    }


    printf("adjustment: ");
    if(scanf("%d",&adjustment)!=1)
    {
        printf("Error: Entered a letter");
        return 1;
    }

    if(balance>0 && multiplier>0 && balance>INT_MAX/multiplier)
    {
        printf("balance*multiplier INT_MAX exceeded");
        return 2;
    }
    if(balance>0 && multiplier<0 && multiplier<INT_MIN/balance)
    {
        printf("balance*multiplier INT_MIN exceeded");
        return 3;
    }
    if(balance<0 && multiplier>0 && balance<INT_MIN/multiplier)
    {
         printf("balance*multiplier INT_MIN exceeded");
         return 4;
    }
    if(balance<0 && multiplier<0 && balance<INT_MAX/multiplier)
    {
         printf("balance*multiplier INT_MAX exceeded");
         return 5;
    }

    product=balance*multiplier;

    if(adjustment > 0 && product>INT_MAX-adjustment)
    {
        printf("Adjustment + product INT_MAX exceeded");
        return 6;
    }
    if(adjustment < 0 && product<INT_MIN-adjustment)
    {
        printf("Adjustment + product INT_MIN exceeded");
        return 7;
    }

    newBalance = product + adjustment;

    printf("New Balance: %d\n",newBalance);
    return 0;
}

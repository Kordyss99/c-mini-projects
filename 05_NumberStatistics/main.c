#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int i;
    int number;
    int odd=0,even=0,total=0;


    printf("Please enter a number: ");
    if(scanf("%d",&number)!=1)
    {
        printf("You can't enter letter");
        return 1;
    }

    if(number>0)
    {
        for(i=1;i<=number;i++)
        {
            if(total>INT_MAX-i)
            {
                printf("Add INT_MAX Exceeded");
                return 2;
            }

            total+=i;

            if(i%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        printf("Total: %d\nEven: %d\nOdd: %d",total,even,odd);
    }
    else
    {
        printf("Please Enter positive number");
        return 3;
    }
    return 0;
}

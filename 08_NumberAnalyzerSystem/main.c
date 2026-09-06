#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{

    int number,i,odd,even,total;
    char choice;
    do{
    odd=0;
    even=0;
    total=0;



    printf("Enter number: ");
    if(scanf("%d",&number)!=1)
    {
        printf("You can't enter letter: ");
        return 2;
    }

    if(number>0)
    {
        for(i=1;i<=number;i++)
        {
            if(i%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }

            if(i%5==0)
            {
                continue;
            }
            if(total>INT_MAX-i)
            {
                printf("Addition INT_MAX exceeded");
                return 3;
            }
            total+=i;

            printf("%d\n",i);

            if(i==34)
            {
                break;
            }

        }
        while(i>=1)
        {
            printf("%d\n",i);
            i--;
        }



        printf("Total: %d\n",total);
        printf("Odd: %d\n",odd);
        printf("Even: %d\n",even);

        printf("Do you want to try again?(Y/N): ");
        scanf(" %c",&choice);
    }
    else
    {
        printf("You can't negative and zero value");
        return 1;
    }
    }while(choice=='Y' || choice=='y');
    return 0;
}

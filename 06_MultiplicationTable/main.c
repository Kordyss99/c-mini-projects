#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int number;
    int i=1;

    printf("Please enter a number: ");
    if(scanf("%d",&number)!=1)
    {
        printf("You can't enter a letter");
        return 1;
    }

    if(number>0)
    {
        while(i<=10)
        {
           if(number>INT_MAX/i)
           {
               printf("Exceeded");
               return 2;
           }
            printf("%d * %d = %d\n",number,i,number*i);
            i++;
        }
    }
    else
    {
        printf("Please Enter positive number");
        return 3;
    }
    return 0;
}

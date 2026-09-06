#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    char choice,select;
    int number;
    int num1,num2;


    do
    {


        system("cls");
        printf("1 > Multiplication Table\n");
        printf("2 > Sum from 1 to N\n");
        printf("3 > multiplies of 17\n");
        printf("4 > Odd/even analysis\n");
        printf("5 > Sign of the product of two numbers\n");
        printf("0 > Exit\n");

        printf("Select: ");
        scanf(" %c",&choice);

        if(choice=='1')
        {
            int column=0;
            for(int i=1;i<=10;i++)
            {

                for(int z=1;z<=10;z++)
                {
                    printf("%d * %d = %1d  ",i,z,i*z);

                }
                printf("\n");
            }

            printf("\ncontinue(y/n): ");
            scanf(" %c",&select);

            if(select=='Y' || select=='y')
            {
                continue;
            }

        }
        else if(choice=='2')
        {

            int total=0;

            printf("Enter Number: ");
            if(scanf("%d",&number)!=1)
            {
                printf("You can't enter a number: ");
                return 1;
            }

            if(number>0)
            {


                for(int z=1;z<=number;z++)
                {
                    if(total>INT_MAX-z)
                    {
                        printf("Addition INT_MAX exceeded");
                        return 6;
                    }
                    total+=z;
                }
                printf("Calc: %d",total);
            }
            else
            {
                printf("You cant enter zero and negative value");
                return 2;
            }

            printf("\ncontinue(y/n): ");
            scanf(" %c",&select);

            if(select=='Y' || select=='y')
            {
                continue;
            }
        }
        else if(choice=='3')
        {
            int i=0;
             printf("Enter Number: ");
            if(scanf("%d",&number)!=1)
            {
                printf("You can't enter a number: ");
                return 1;
            }

            if(number>0)
            {
                while(i<number)
                {
                    if(i%17==0)
                    {
                        printf("%d",i);
                    }
                    i++;
                }
            }
            else
            {
                printf("You cant enter zero and negative value");
                return 2;
            }

            printf("\ncontinue(y/n): ");
            scanf(" %c",&select);

            if(select=='Y' || select=='y')
            {
                continue;
            }
        }
        else if(choice=='4')
        {
            printf("Enter Number: ");
            if(scanf("%d",&number)!=1)
            {
                printf("You can't enter a number: ");
                return 1;
            }

            if(number>0 && number%2==0)
            {
                printf("Positive and even");
            }
            else if(number<0 && number%2==0)
            {
                printf("Negative and even");
            }
            else if(number>0 && number%2!=0)
            {
                printf("Positive and odd");
            }
            else if(number<0 && number%2!=0)
            {
                printf("Negative and odd");
            }
            else
            {
                printf("You entered a zero value");
            }
            printf("\ncontinue(y/n): ");
            scanf(" %c",&select);

            if(select=='Y' || select=='y')
            {
                continue;
            }
        }

        else if(choice=='5')
        {
            printf("Enter Number1: ");
            if(scanf("%d",&num1)!=1)
            {
                printf("You can't enter a number: ");
                return 1;
            }


            printf("Enter Number2: ");
            if(scanf("%d",&num2)!=1)
            {
                printf("You can't enter a number: ");
                return 1;
            }

            if((num1>0 && num2>0) || (num1<0 && num2<0))
            {
                printf("Positive");
            }
            else if((num1>0 && num2<0) || (num1<0 && num2>0))
            {
                printf("Negative");
            }
            else
            {
                 printf("You entered a zero value");
            }

            printf("\ncontinue(y/n): ");
            scanf(" %c",&select);

            if(select=='Y' || select=='y')
            {
                continue;
            }
        }

        else if(choice=='0')
        {
            break;
        }

    }while(choice!='0');
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//return 1; letter error
//return 2; underage
//return 3; vote error a or b;
//return 4; account blocked
int main()
{
    int balance=5000;
    int age;
    char accountStatus;

    printf("Age: ");
    if(scanf("%d",&age)!=1)
    {
        printf("Please enter age ");
        return 1;
    }
    if(age<18)
    {
        printf("Access denied: You are underage");
        return 2;

    }
    else
    {
        printf("Account Status: ");
        scanf(" %c",&accountStatus);
        if(accountStatus != 'A' && accountStatus!='a' && accountStatus != 'B' && accountStatus!='b')
        {
            printf("Please enter A -> Active or B -> Blocked");
            return 3;
        }
        if(accountStatus=='B' || accountStatus=='b')
        {
            printf("Your account is blocked.");
            return 4;
        }
        else
        {
            printf("Account correct");
        }
    }
    return 0;
}

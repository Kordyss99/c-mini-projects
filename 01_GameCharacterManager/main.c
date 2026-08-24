#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX_HEALTH 100
int main()
{
    char name;
    int age,attack,def,E_Health,damage=0;
    int health=MAX_HEALTH;
    int attackCount=2;

    printf("Please Enter name first letter: ");
    scanf(" %c",&name);

    printf("How can old are you?: ");
    if(scanf("%d",&age) !=1)
    {
        printf("Error: Don't enter letter");
        return 1;
    }
    else if(age<=18)
    {
        printf("Error: You are under 18 years old. ");;
        return 2;
    }
    else
    {
        printf("Enemy Health: ");
        if(scanf("%d",&E_Health)!=1)
        {
            printf("Error: Don't enter letter");
            return 1;
        }
        printf("Attack: ");
        if(scanf("%d",&attack)!=1)
        {
            printf("Error: Don't enter letter");
            return 1;
        }
        printf("Def: ");
        if(scanf("%d",&def)!=1)
        {
            printf("Error: Don't enter letter");
            return 1;
        }

        else if(E_Health<=0 || attack<=0 || def<=0)
        {
            printf("Error: You don't enter zero value");
            return 4;
        }

        printf("Waiting...");

        if(health>0 && attack>0)
        {
            if(attack>def)
            {
                damage=attack-def;
            }
            else
            {
                printf("Error: Defense is greater than offense. ");
                damage = 0;
            }
            attackCount+=1;
        }

        if (attackCount % 3 == 0)
        {
            damage*=2;

            if(damage>INT_MAX/2)
                {
                    printf("ERROR");
                    return 5;
                }

        }

        E_Health-=damage;

        printf("New Enemy Health: %d",E_Health);

    }
    return 0;



}

#include<stdio.h>
int main()
{
    int age, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &age);
        if(age<=0)
            printf("Age is not valid, setting age to 0.\n");
        if(age<13)
            printf("You are young.\n");
        if (age>=13 &&age<18)
            printf("You are a teenager.\n");
        if(age >=13 && age<=30)
            printf("You are old.\n");
    }
}

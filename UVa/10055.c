#include<stdio.h>
int main()
{
    long int num1, num2;
    while(scanf("%ld%ld",&num1, &num2)==2)
    {
        if(num1>num2)
            printf("%ld\n",num1-num2);
        else
            printf("%ld\n",num2-num1);
    }
    return 0;
}

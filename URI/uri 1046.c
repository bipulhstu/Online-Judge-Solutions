#include<stdio.h>
int main()
{
    int a, b , c;
    scanf("%d%d", &a, &b);
    c=b-a;
    if(c<0)
    {
        c=24+(b-a);
        printf("O JOGO DUROU %d HORA(S)\n", c);
    }
    else if(c>0)
    {
     c=(b-a);
        printf("O JOGO DUROU %d HORA(S)\n", c);
    }
    else if (a==b)
        printf("O JOGO DUROU 24 HORA(S)\n");

    return 0;
}

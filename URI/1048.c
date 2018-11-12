#include<stdio.h>
int main()
{
    float salary, percentage, news;
    int p;
    scanf("%o.2f", &salary);
    if(salary>0.00 && salary<=400.00)
    {
    news=salary+(salary*0.15);
    percentage=salary*0.15;
    p=15;

        printf("Novo salario: %0.2f\n",news);
        printf("Reajuste ganho: %0.2f\n",percentage);
        printf("Em percentual: %d", p);
    }/*
    else if(salary>400.01 && salary<=800.00)
    {
    news=salary+salary*0.12;
    percentage=salary*0.12;
    p=12;

        printf("Novo salario: %0.2f\n",news);
        printf("Reajuste ganho: %0.2f\n",percentage);
        printf("Em percentual: %d", p);
    }
    else if(salary>=800.01 && salary<=1200.00)
    {
    news=salary+salary*0.10;
    percentage=salary*0.10;
    p=10;

        printf("Novo salario: %0.2f\n",news);
        printf("Reajuste ganho: %0.2f\n",percentage);
        printf("Em percentual: %d", p);
    }
    else  if(salary>1200.01 && salary<=2000.00)
    {
    news=salary+salary*0.7;
    percentage=salary*0.7;
    p=7;

        printf("Novo salario: %0.2f\n",news);
        printf("Reajuste ganho: %0.2f\n",percentage);
        printf("Em percentual: %d", p);
    }
    else if(salary>2000)
    {
    news=salary+salary*0.4;
    percentage=salary*0.4;
    p=4;

        printf("Novo salario: %0.2f\n",news);
        printf("Reajuste ganho: %0.2f\n",percentage);
        printf("Em percentual: %d", p);
    }*/
}

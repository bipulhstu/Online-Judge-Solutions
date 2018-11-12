#include<stdio.h>
int main()
{
    char a[100];
    double b, c, d;
    scanf("%s",a);
    scanf("%lf %lf", &b, &c);
    d = b + (c *15) / 100;
    printf("TOTAL = R$ %0.2f\n", d);
    return 0;
}   
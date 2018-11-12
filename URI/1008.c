#include<stdio.h>
int main()
{
    int a, b;
    float c;
    scanf("%d%d", &a, &b);
    scanf("%f", &c);
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %0.2f\n", b*c);
    return 0;
}
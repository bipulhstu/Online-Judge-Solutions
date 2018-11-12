#include<stdio.h>
#include<string.h>
int main()
{
    int i=4,j,sum;
    double d=4.0, e, sum2;
    char s[100]="Hackerrank ";
    char a[100];
    scanf("%d%lf\n%[^\n]",&j,&e,a);
    sum=i+j;
    sum2=d+e;
    strcat(s,a);
    printf("%d\n%0.1lf\n%s\n",sum, sum2, s);
    return 0;
}

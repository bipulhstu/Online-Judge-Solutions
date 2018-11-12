#include<stdio.h>
long long int factorial(int n)
{
    long long int fact=1, i;
    for(i=1; i<=n; i++)
        fact=fact*i;
    return fact;
}
int main()
{

    double  result1, result2;
    double result;
    int p, q, r, s;
    while(scanf("%d%d%d%d",&p,&q,&r,&s)!=EOF)
    {
        result1=factorial(p)/(factorial(q)*factorial(p-q));
        printf("%lf\n",result1);
        result2=factorial(r)/(factorial(s)*factorial(r-s));
        //printf("%lf\n",result2);
        result=(result1/result2);
        //printf("%lf\n",result1/result2);
        printf("%.5lf\n",result);

    }
    return 0;
}

#include<stdio.h>
int main()
{
    int t;
     int i;
    long long int factorial=1, n;
    scanf("%d",&t);
    while (t--)
    {
    scanf("%lld", &n);
    for(i=1; i<=n; i++)
    {
        factorial=factorial*i;
    }
    printf("%lld\n",factorial);
    }
    return 0;

}


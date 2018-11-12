#include<stdio.h>
int main()
{
    int n, k, cigarettes, result;
    while(scanf("%d%d",&n,&k)==2)
    {
        cigarettes=n;
        while(n>=k)
        {
           cigarettes+=(n/k);
           n=(n/k)+(n%k);


        }
        printf("%d\n",cigarettes);
    }
}


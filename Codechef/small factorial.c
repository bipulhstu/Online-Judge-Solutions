#include<stdio.h>
int main()
{
    int i, t,j, n;
    long int f;
    scanf("%d",&t);
    for(i=1;i<=t; i++)
    {
        scanf("%d",&n);
        f=1;
        for(j=1; j<=n; j++)
        {
            f=f*j;

        }
        printf("%ld\n",f);

    }
}

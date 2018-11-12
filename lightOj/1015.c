#include<stdio.h>
int main()
{
    int t, s, i,j,n,sum;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&s);
        sum=0;
        for(j=1; j<=s; j++)
        {
            scanf("%d",&n);
            if(n>0)
            sum=sum+n;
        }
        if(sum>0)
        printf("Case %d: %d\n",i, sum);
    }
    return 0;
}

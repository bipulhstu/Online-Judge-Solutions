#include<stdio.h>
int main()
{
    int n, m, k, t, r,i;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d", &n, &m, &k);
        r = k /(n-m);}
        if(r>0)
        printf("Case %d: %d\n", i, r);
        else if (r<0)
        printf("Case %d: Impossible\n", i);
    return 0;
}
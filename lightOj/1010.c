#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a, b, t, i, m;
    double r, s;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&a, &b);
        r=(double)a*b/2;
        s=ceil(r);
        m=(int)(s);
        printf("Case %d: %d\n",i,m);
    }
    return 0;
}

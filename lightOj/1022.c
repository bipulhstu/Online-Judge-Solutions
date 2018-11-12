#include<stdio.h>
#include<math.h>
int main()
{
    int t, i, j, n;
    double r,s , a, pi;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf",&r);
        pi=2*acos(0.0);
        s=r+r;
        a=(s*s)-(pi*r*r);
        printf("Case %d: %.2lf\n",i,a);
    }
    return 0;
}

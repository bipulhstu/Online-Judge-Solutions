#include<stdio.h>
int main()
{
    int t, a, b,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        r=b/3;
        printf("%d\n",r);
    }
    return 0;
}

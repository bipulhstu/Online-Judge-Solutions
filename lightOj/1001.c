#include <stdio.h>
int main()
{
    int a,b,n,d,s;
    scanf("%d", &a);
    for(b=0; b<a; b++)
    {
        scanf ("%d", &n);
        if(n>10)
        {
            d=n-10;
            s=10;
            printf("%d %d\n",d,s);
        }
        else
        {
            d=0;
            printf("%d %d\n",d,n);
        }
    }
    return 0;
}

///Bipul Islam, BSc in EEE, HSTU
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int maxl(int n)
{
    int c=1;
    while(n>1)
    {
        if(n%2!=0)
            n=3*n+1;
        else
             n=n/2;

        c++;
    }
    return c;
}

int main()
{
    int i, n, m, ma=0, j, x, y;
    while(scanf("%d%d",&x,&y)==2)
    {
        n= (x<y)?x:y;
        m= (x>y)?x:y;
        for(i=n; i<=m; i++)
        {
             //ma=max(maxl(i),ma);
             if(maxl(i)>=ma)
                ma=maxl(i);

        }

        printf("%d %d %d\n",n, m, ma);
        ma=0;
    }

    return 0;
}

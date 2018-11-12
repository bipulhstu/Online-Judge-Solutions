#include<stdio.h>
int main()
{
    int t, n, i, j, m;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&m);
           //j=m;
        if(m<38)
            printf("%d\n",m);

        else if(m>=38 && m<=100)
        {
            if(m%5==0)
                printf("%d\n",m);
            else if(m%5!=0)
        {
            j=m+2;
            if(j%5==0)
                printf("%d\n",j);
            else if(m%5!=0)
            {
            j=m+1;
            if(j%5==0)
                printf("%d\n",j);
            else
                 printf("%d\n",m);
            }
        }
        }
    }
    return 0;
}

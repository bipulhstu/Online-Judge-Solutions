#include<stdio.h>
int main()
{
    int ara[100],i,n=0,p;
    for(i=0;i<10;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0; i<10; i++)
    {
        if(n<ara[i])
        {
            n=ara[i];
            p=i;
        }
    }
    printf("%d\n%d\n",n,p);
    return 0;
}

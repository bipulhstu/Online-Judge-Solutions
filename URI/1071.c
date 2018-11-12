#include<stdio.h>
int main()
{
    int i,j, n,sum=0;
    scanf("%d%d",&i,&n);
    if(i<n)
    {
    for(i=i+1; i<n; i++)
    {
        if(i%2==1 || i%2== -1)
       sum=sum+i;
    }
    printf("%d\n",sum);
    }
    else if(i>n)
    {
        for(n=n+1; n<i; n++)
        {
    if(n%2==1 || n%2== -1)

    sum=sum+n;
        }
    printf("%d\n",sum);
    }
    else if(i==n)
        printf("%d\n",sum);
    return 0;
}



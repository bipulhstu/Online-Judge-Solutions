#include<stdio.h>
int main()
{
    int i,j, n,t,sum=0,x,y;
    scanf("%d",&t);
    while(t--){
    scanf("%d%d",&x,&y);
    i=x; n=y;
    sum=0;
    if(i<n)
    {
    for(i=i+1,sum=0;i<n; i++)
    {
        if(i%2==1 || i%2== -1)
       sum=sum+i;
    }
    printf("%d\n",sum);
    }
    else if(i>n)
    {
        for(n=n+1,sum=0;n<i; n++)
        {
    if(n%2==1 || n%2==-1)

    sum=sum+n;
        }
    printf("%d\n",sum);
    }

    else if(i==n)
        printf("%d\n",sum);
    }
    return 0;
}




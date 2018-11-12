#include<stdio.h>
int main()
{
    int i,N,n;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        scanf("%d", &n);
        if(n%2==0 && n>0)
            printf("EVEN POSITIVE\n");

        else if(n%2==0 && n<0)
            printf("EVEN NEGATIVE\n");

        else if(n%2!=0 && n<0)
            printf("ODD NEGATIVE\n");
        else if(n%2!=0 && n>0)
            printf("ODD POSITIVE\n");
        else if(n==0)
            printf("NULL\n");

    }

    return 0;
}




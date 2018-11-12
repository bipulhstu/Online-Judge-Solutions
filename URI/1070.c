#include<stdio.h>
int main()
{
    int i, n, t=6;
    scanf("%d",&n);
    i=(n%2==0)?n+1:n;
    while(t--)
    {
        printf("%d\n",i);
        i+=2;
    }
    return 0;
}



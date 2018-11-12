#include<stdio.h>
int main()
{
    int N, X,count=0, count2=0;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d",&X);
        if(X>=10 && X<=20)
            count++;
        else
            count2++;
    }
    printf("%d in\n%d out\n",count, count2);
    return 0;
}

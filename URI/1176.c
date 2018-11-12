#include<stdio.h>
int main()
{
    int i, a,n[100],count1=0;
    n[0]=0;
    n[1]=1;
    scanf("%d", &a);
    printf("%d %d",n[0],n[1]);
    for (i=2; i<a; i++)
    {
        n[i]=n[i-2]+n[i-1];
        printf(" %d\n", n[i]);
    }
    printf(" %d", n[i]);
    return 0;
}


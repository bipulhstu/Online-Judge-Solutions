#include<stdio.h>
int main()
{
    int i, j, n;
    for(i=1; i<=100;i++)
    {
        scanf("%d", &n);

        if(n==42)
            break;
            printf("%d\n", n);
    }

    return 0;
}

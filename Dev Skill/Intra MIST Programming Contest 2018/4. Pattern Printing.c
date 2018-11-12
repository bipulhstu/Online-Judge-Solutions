#include<stdio.h>
int main()
{
    int i, j, n, k, temp;
    scanf("%d", &n);
    temp = n;
    for(i =1; i<=n; i++)
    {
        for(k=1; k<temp; k++)
            printf(" ");
        temp--;
        for(j=1;j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    temp = 1;
    for(i =1; i<=n-1; i++)
    {
        for(k=1; k<=temp; k++)
            printf(" ");
        temp++;
        for(j=1;j<=2*(n-i)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}

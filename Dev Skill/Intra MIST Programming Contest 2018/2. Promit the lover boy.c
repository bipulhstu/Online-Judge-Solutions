#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d",&i);
        if(i == 1)
            printf("No\n");
        else if(i == 0)
            printf("Sure na Dost, Ashar try korbo!!\n");
    }
    return 0;
}

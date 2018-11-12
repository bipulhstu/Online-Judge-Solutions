///count divisors
#include<stdio.h>
int main()
{
    int l, r, k, i, count=0;
    scanf("%d %d %d", &l, &r, &k);
    for(l;l<=r; l++)
    {
        if(r%k==0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}

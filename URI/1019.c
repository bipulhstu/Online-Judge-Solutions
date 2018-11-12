#include<stdio.h>
int main()
{
    int n, hour, minute, sec;
    scanf("%d", &n);
    hour=n/(60*60);
    n=n%(60*60);
    minute=n/60;
    sec=n%60;
    printf("%d:%d:%d\n", hour, minute, sec);
    return 0;
}
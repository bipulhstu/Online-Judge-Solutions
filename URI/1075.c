#include<stdio.h>
int main()
{
    int a, N;
    scanf("%d",&N);
    for(a=2;a<=10000;a=a+N)
        printf ("%d\n",a);
    return 0;

}

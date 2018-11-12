#include<stdio.h>
int main()
{
    int N, i;
    long long int p=1;
    scanf("%d", &N);
    int A[N];
    for(i=1; i<=N; i++)
    {
        scanf("%d", &A[i]);
        p=p*A[i]%1000000007;
    }
    printf("%lld\n", p);
}

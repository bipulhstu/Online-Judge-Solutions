#include<stdio.h>
int main()
{
    int A[100],i, N;
    scanf("%d", &N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i=N-1; i>=0; i--)
    {
        printf("%d ", A[i]);
    }
    return 0;
}

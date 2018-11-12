#include<stdio.h>
int main()
{
    int i, N, count1=0, j;
        scanf("%d",&N);
        for(j=1; j<=N; j++)
        {
            if(N%j==0){
                printf("%d\n", j);
            }
        }


    return 0;
}


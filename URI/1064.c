#include<stdio.h>
int main()
{
    int i,  count=0;
    float n,sum=0.00,average;
    for(i=1; i<=6; i++)
    {
        scanf("%f", &n);
        if(n>0){
            count++;
            sum=sum+n;
        }
    }
    average=sum/count;
    printf("%d valores positivos\n%0.1f\n",count,average);
    return 0;
}


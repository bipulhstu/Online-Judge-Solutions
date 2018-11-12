#include<stdio.h>
#include<math.h>
int main()
{
    int i, a, b, n, q, sum=0, loop;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d%d%d",&a,&b,&n);
        sum=sum+a;
        for(i=0; i<n; i++)
        {
            loop=pow(2,i)*b;
            sum=sum+loop;
            printf("%d ",sum);
        }
        sum=0;
    }
}

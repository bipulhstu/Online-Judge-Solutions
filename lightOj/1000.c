#include<stdio.h>
int main()
{
  int t, i, n,a, b, sum=0;
  scanf("%d",&t);
  for(i=1; i<=t; i++)
{
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Case %d: %d\n",i,sum);
   }
return 0;
}

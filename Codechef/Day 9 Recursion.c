//Day 9: Recursion
#include<stdio.h>
int factorial(int n)
{
    int f,i;
    if(n<=0)
        return 1;
    else
      return (n*factorial(n-1));

}
int main()
{
    int num,result;
    scanf("%d",&num);

    printf("%d\n",factorial(num));

    return 0;

 }

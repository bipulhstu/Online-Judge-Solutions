#include<stdio.h>
#include<math.h>
int main()
{
    int l;
    float r;
    while((scanf("%d",&l)!=EOF))
    {
        r=(l*l)*sqrt(3)/4;
        printf("%.2f\n",r);
    }
    return 0;
}

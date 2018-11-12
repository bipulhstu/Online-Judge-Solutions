#include<stdio.h>
int main()
{
    float a, b, c,d;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f%f%f",&a,&b,&c);
        d=(a*2+b*3+c*5)/10;
        printf("%0.1f\n",d);
    }
    return 0;

}

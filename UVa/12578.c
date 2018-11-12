#include<stdio.h>
#include<math.h>
int main()
{
   int t;
   double l, w, r, ar, ag;
   scanf("%d", &t);
   while(t--)
{
    scanf("%lf", &l);
    w = (l/10)*6;
    r = (l/5);
    ar = acos(-1)*r*r;
    ag = l*w - ar;
    printf("%.2lf %.2lf\n", ar, ag);
}
    return 0;
}

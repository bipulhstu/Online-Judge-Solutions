/*given that median a, b , c of a triangle
  we have to calculate the area of the triangle
  so area of the triangle by using Heron's formula
   area= 4*sqrt(s(s-a)*(s-b)*(s-c))/3;
   where, s=(a+b+c)/2
*/
#include<stdio.h>n
#include<math.h>
int main()
{
    double area, inter, a, b, c;
    while(scanf("%lf%lf%lf",&a,&b,&c) !=EOF)
    {
        double s;
        s=(a+b+c)/2.0;
        inter=(s*(s-a)*(s-b)*(s-c));
        if(inter<0)
            area= -1;
        else
            area=4*sqrt(inter)/3;
        if(area==0)
            area= -1;
        printf("%.3lf\n",area);
    }
    return 0;
}

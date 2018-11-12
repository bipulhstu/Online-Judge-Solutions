#include<stdio.h>
int main()
{
    float a, b, c, d, x, r, y;
    scanf("%f%f%f%f", &a, &b, &c,&d);
    r= (2*a+3*b+4*c+1*d)/(10.0);
    printf("Media: %.1f\n", r);
    if (r>=7.0)
    {
    printf("Aluno aprovado.\n");
    }
   if (r<5.0)
    {
    printf("Aluno reprovado.\n");
    }
    if (r>=5.0 && r<=6.9)
    {
    printf("Aluno em exame.\n");
    scanf("%f", &y);
    printf("Nota do exame: %.1f\n", y);
          x= (r+y)/2.0;
           if (x>=5.0)
           {
               printf("Aluno aprovado.\n");
           }
           else if (x<=4.9)
           {
                printf("Aluno reprovado.\n");
           }
    printf("Media final: %.1f\n", x);
    }
    return 0;
}
    
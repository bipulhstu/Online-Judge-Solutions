#include<stdio.h>
int main()
{
    int a, b, t;
    float r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(b==0)
        printf("divisao impossivel\n");
        else
        {
            r=(float)a/b;
            printf("%0.1f\n",r);
        }

    }
    return 0;
}


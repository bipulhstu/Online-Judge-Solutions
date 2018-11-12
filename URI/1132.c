#include<stdio.h>
int main()
{
    int i, a, b,sum=0;
    scanf("%d%d",&a,&b);
    if(a<b){

        for(i=a+1; i<b; i++)
        {
            if(i%5==2 ||i%5==3)
                printf("%d\n",i);
        }
    }


    else if(a>b)
    {
        for(i=b+1; i<a; i++)
        {
            if(i%5==2 ||i%5==3)
                printf("%d\n",i);

        }

    }
    else
    printf("%d\n",sum);

    return 0;
    }

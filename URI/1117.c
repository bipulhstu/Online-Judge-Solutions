#include<stdio.h>
int main()
{
    float count=0.0,sum=0,a,media;
    while(1)
    {
        if(count==2)
        break;

        scanf("%f",&a);
        if(a<=10 && a>=0)
        {
            sum=sum+a;
            count++;
        }
       else
        printf("nota invalida\n");
    }
    media=sum/2.00;
     printf("media = %0.2f\n",media);

    return 0;
    }

#include<stdio.h>
int main()
{
    int i,j,n;
    char T[2];
    double sum=0.0,average,M[12][12];
    scanf("%d",&n);
    scanf("%s",&T);
    for(i=0;i<12;i++)
    {
            for(j=0;j<12;j++)
        {
           scanf("%lf",&M[i][j]);
           if(i==n)
           sum=sum+M[i][j];
        }

    }
    if(T[0]=='S')
        printf("%0.1lf\n",sum);
    else if(T[0]=='M'){
        sum=sum/12.0;
        printf("%0.1lf\n",sum);
    }
    return 0;
}

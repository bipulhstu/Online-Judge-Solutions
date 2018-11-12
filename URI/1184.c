#include<stdio.h>
int main()
{
    int i,j,n,c,p=0,k;
    char T[2];
    double sum=0.0,average,M[12][12];
    scanf("%s",&T);
    for(i=0;i<=11;i++)
    {
            for(j=0;j<=11;j++)

           scanf("%lf",&M[i][j]);


    }
     for(k=1;k<=11;k++)
    {
        for(c=0;c<=p;c++)

            sum=sum+M[k][c];
            p++;

    }
    if(T[0]=='S')
        printf("%0.1lf\n",sum);
    else if(T[0]=='M'){
        sum=sum/66.0;
        printf("%0.1lf\n",sum);
    }
    return 0;
}




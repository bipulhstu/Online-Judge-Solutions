#include<stdio.h>
int main()
{
    int i,j,co;
    float mb,rm;
    scanf("%d%f",&co,&mb);
    if(co%5==0 && mb>co+0.50)
        {
        rm=mb-co-0.50;
        printf("%0.2f\n",rm);
        }
    else
        printf("%0.2f\n",mb);
    return 0;
}

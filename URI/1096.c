
#include<stdio.h>
int main()
{
    int i,j,x=0,y=0, n,t=5;
    while(t--){

    for(i=x+1,j=y+7; j>=5+y;j=j-1)
    {
        printf("I=%d J=%d\n",i,j);

    }
     x=x+2;
     y=y+2;

    }
    return 0;
}


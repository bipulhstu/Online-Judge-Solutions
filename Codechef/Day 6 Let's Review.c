#include<stdio.h>
#include<string.h>
int main()
{
    int  i, j,t;
    char input[10000];
    scanf("%d",&t);
    for(j=0;j<t;j++)
{
    scanf("%s",input);
    for(i=0;i<=strlen(input);i++)
    {   if(i%2==0)
    {
        printf("%c",input[i]);
    }
    }
    printf(" ");

    for(i=0;i<=strlen(input);i++)
    {   if(i%2==1)
        {
        printf("%c",input[i]);
    }
    }
   printf("\n");
}
    return 0;
}


///Ecological Premium
#include<stdio.h>
int main()
{
    int cases;
    scanf("%d",&cases);
    while(cases--)
    {
        int n,sum=0, farmyards, animals, environment;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d%d%d",&farmyards,&animals,&environment);

            sum=sum+farmyards*environment;
        }
        printf("%d\n",sum);
    }
    return 0;
}

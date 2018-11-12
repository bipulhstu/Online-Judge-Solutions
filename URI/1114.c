#include<stdio.h>
int main()
{
    int i, j;
    while(1)
    {
        scanf("%d",&i);
        if(i==2002){
            printf("Acesso Permitido\n");
            break;
    }
        else if(i!=2002)
            printf("Senha Invalida\n");
    }
    return 0;
}

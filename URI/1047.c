#include<stdio.h>
int main()
{
    int st, sh, sm, et, eh, em, rh, rm;
    scanf("%d%d%d%d", &sh, &sm, &eh, &em);
    if(eh>sh)
    {
    st=((eh-sh)*60)+(em-sm);
    rh=st/60;
    rm=st%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",rh, rm);
    }
    else if (eh==sh && em==sm)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    return 0;
}

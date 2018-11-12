#include<stdio.h>
int main()
{
    int n1, n2, i, j ,k;
    scanf("%d-%d", &n1, &n2);

    j = n2 - 2000;

    if(n1<2000 || n2<2000)
        printf("CSE department started its journey from 2000-2001\n");
    else if(n1>=2000 && n2>=2000)
        printf("CSE-%d\n",j);

    return 0;
}

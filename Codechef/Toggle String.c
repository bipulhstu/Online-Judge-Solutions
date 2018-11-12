#include<stdio.h>
int main()
{
    char str[100];
    int i;
    scanf("%[^\n]",str);
    for(i=0; str!='\n'; i++)
    {
        if(islower(str[i]))
            str[i]=toupper(str[i]);
        else if(isupper(str[i]))
            str[i]=tolower(str[i]);
    }
    str[i]='\0';
    printf("%s\n",str);
}

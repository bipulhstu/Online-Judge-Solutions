#include<stdio.h>
#include<string.h>
main()
{
    char s1[100], s2[100], s3[100];
    scanf("%s%s%s", s1, s2, s3);
    if(s1=='vertebrado')
    {
        if(s2=='ave' && s3=='carnivoro')
            printf("aguia\n");
        else if(s2=='ave' && s3=='onivoro')
            printf("pomba\n");
    }


}

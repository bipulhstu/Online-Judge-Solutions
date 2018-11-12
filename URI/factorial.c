#include<stdio.h>
int main(){
 int i, n, t;
 long long int f;
 scanf("%d", &t);
 for(i=1; i<=t; i++)
 {
     scanf("%d", &n);
     for(i=1; i<=n; i++)
     {
         f=f*i;
     }
 }
 printf("%lld", f);
 return 0;
}
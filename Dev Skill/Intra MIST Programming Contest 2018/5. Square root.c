#include<stdio.h>
#include<math.h>
int main()
{
    long long int i, t, j ,k;
    long long int num;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld",&num);
        long int reverse = 0, reverse2 = 0;
        float rem, n, temp;
        long int n2, n3, n4;
        n = sqrt(num);
        n2= sqrt(num);
        temp = n - n2;
        //printf("%f\n",temp);
        temp = temp * 10000;
        //printf("%f\n",temp);
        n3 = n;
        n4 = temp;
        reverse = n3;
        while(n4!=0)
        {
            rem = n4%10;
            reverse2 = reverse2*10 + rem;
            n4/=10;
        }
        printf("%04ld.%ld\n",reverse2,reverse);
    }
    return 0;
}

#include<iostream>
#include<math.h>
int is_prime(int n)
{
    int i, root;
    if(n<2)
        return 0;
    else if(n==2)
        return 1;
    else if(n%2==0)
        return 0;
    root=sqrt(n);
    for(i=3; i<=root; i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,t;
    std::cin>>t;
    while(t--)
    {
        std::cin>>n;
        if(1==is_prime(n))
            std::cout<<n<<" eh primo\n";
        else
            std::cout<<n<<" nao eh primo\n";
    }
    return 0;
}



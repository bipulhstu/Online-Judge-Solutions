#include<iostream>
using namespace std;
int main()
{
    int par[4],impar[4],i,j,n[15];
    for(i=0;i<15; i++)
    {
        cin>>n[i];
    }
    for(i=0;i<15; i++)
    {
        if(n[i]%2==0)
        {
            for(i=0;i<5;i++)
                cout<<"par["<<i<<"] = "<<n<<"\n";
        }
        else if(n[i]%2!=0)
        {
            for(i=0;i<5;i++)
                cout<<"impar["<<i<<"] = "<<n<<"\n";
        }

    }
    return 0;
}

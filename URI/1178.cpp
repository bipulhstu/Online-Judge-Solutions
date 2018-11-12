#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int N[100],i,j=0;
    double T;
    cin>>fixed>>setprecision(4)>>T;
    for(i=0;i<100;i++)
    {
        cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<T<<"\n";
            T=T/2;
    }
    return 0;
}


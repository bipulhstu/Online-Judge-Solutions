#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int A[100],i;
    float n;

    for(i=0;i<100;i++)
    {
        cin>>n;
        if(n<=10)
        cout << "A[" << i << "] = " <<fixed<<setprecision(1)<< n << "\n";

    }
    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    int N,i,f=1;
    cin>>N;
    for(i=1; i<=N; i++)
    {
        f=f*i;
    }
    cout<<f<<"\n";
    return 0;
}

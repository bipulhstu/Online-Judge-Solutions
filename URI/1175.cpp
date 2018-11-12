#include<iostream>
using namespace std;
int main()
{
    int N[20],i,j,n;
    for(i=0; i<20; i++)
    {
        cin>>N[i];
        temp=N[i];
        N[i]=N[20-i];
        N[20-i]=temp;
    }
    for(i=0; i<20; i++)
    {
        cout<<"N["<<i
    }
}

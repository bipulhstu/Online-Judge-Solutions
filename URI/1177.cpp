#include<iostream>
using namespace std;
int main()
{
    int N[1000],T,i,j=0;
    cin>>T;
    for(i=0,j=0;i<1000;i++)
    {
        cout<<"N["<<i<<"] = "<<j<<"\n";
            j++;
        if(j==T)
            j=0;


    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a, b,i,j,count1=0;
    cin>>a>>b;
    for(i=1; i<=b; i++)
    {

        cout<<i;
        count1++;
        if(count1==a){
            cout<<"\n";
            count1=0;}
        else
             cout<<" ";

    }

}

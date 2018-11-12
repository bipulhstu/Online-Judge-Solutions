#include<iostream>
using namespace std;
int main()
{
    int N, x, y,i,sum,count1;
    cin>>N;
    while(N--)
    {
        cin>>x>>y;
        sum=0;count1=0;
        if(x%2!=0)
        {
        for(i=1; i<=y;i++)
        {
            sum=sum+x;
            x=x+2;
        }
        cout<<sum<<"\n";
        }
        else
        {
        x=x+1;
        for(i=1; i<=y;i++)
        {
            sum=sum+x;
            x=x+2;
        }
        cout<<sum<<"\n";
    }

    }
    return 0;
}

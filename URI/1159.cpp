#include<iostream>
using namespace std;
int main()
{
    int N, x, y,i,sum,count1;
    while(1)
    {
        cin>>x;
        sum=0;
        if(x==0)
            break;
        else if(x%2==0)
        {
        for(i=1; i<=5;i++)
        {
            sum=sum+x;
            x=x+2;
        }
        cout<<sum<<"\n";
        }
        else if(x%2!=0)
        {
        x=x+1;
        for(i=1; i<=5;i++)
        {
            sum=sum+x;
            x=x+2;
        }
        cout<<sum<<"\n";
    }

    }
    return 0;
}


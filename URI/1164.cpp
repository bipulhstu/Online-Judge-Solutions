#include<iostream>
using namespace std;
int main()
{
    int N, x, y,i,sum,count1;
    cin>>N;
    while(N--){
            cin>>x;
            sum=0;
        for(i=1; i<x;i++)
        {
            if(x%i==0)
            sum=sum+i;

        }
        if(sum==x)
        cout<<x<<" eh perfeito\n";
        else
            cout<<x<<" nao eh perfeito\n";

    }
    return 0;
}


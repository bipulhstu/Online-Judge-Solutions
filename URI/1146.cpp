#include<iostream>
using namespace std;
int main()
{
    int a, b,i,j,count1=0;

    while(1)
    {
         cin>>a;

            if(a==0)
            break;
    else{
    for(i=1; i<=a; i++)
    {
        cout<<i;
        count1++;
        if(count1==a)
        {
            cout<<"\n";
            count1=0;
        }
        else
             cout<<" ";

    }
    }
    }

}


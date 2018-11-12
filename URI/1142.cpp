#include<iostream>
using namespace std;
int main()
{
    int N,i,j,k=1,l=4;
    cin>>N;
    while(N--)
    {
         for(j=k;j<=l;j++)
            {
                if(j%4==0)
                    cout<<"PUM"<<endl;
                else
                    cout<<j<<" ";
            }
            l+=4; k+=4;

        }

    return 0;
}

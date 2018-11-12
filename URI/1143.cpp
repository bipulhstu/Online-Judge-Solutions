#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, b, c, N;
    cin>>N;
    for(a=1; a<=N; a++)
    {
        b=a*a;

        c=a*a*a;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i, a, b,sum=0,count1=0;
    float average;
    while(1)
    {
    cin>>a;
    if(a<0)
        break;
    else
    {
        sum=sum+a;
        count1++;
    }}
    average=(float)sum/count1;
    cout<< setprecision (2) << fixed <<average<<"\n";
    return 0;
}

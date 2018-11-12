#include<iostream>
#include<math.h>
using namespace std;
int main(){
int counter = 0, max_num=0,n;
cin>>n;
while (n > 0) {
    int rem = n%2;
    if (rem==1) counter++;
    else counter=0;
    max_num=max(counter, max_num);
    n/=2;
}
cout<<max_num;
}

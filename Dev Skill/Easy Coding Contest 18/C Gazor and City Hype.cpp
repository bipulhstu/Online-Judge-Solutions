#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
    {
        int i, j, k, p, sum = 0;
        long long int n;
        cin>>p>>n;
        for(i = 1; i<=p ; i++)
        {
            sum = sum + pow(i, n);
        }


        cout<<sum % 5<<endl;

    }
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
    {
        int n, temp;
        string s, s2;
        int g;
        cin>>n;
        temp = 0;
        while(n--)
        {

            cin>>s>>g;
            if(g>temp)
            {
                s2 = s;
                temp = g;
            }
        }
        cout<<"Winner: \\"<<s2<<"/"<<endl;
    }
	return 0;
}

nclude<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string ss =s;
        reverse(s.begin(),s.end());
        if(s==ss) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

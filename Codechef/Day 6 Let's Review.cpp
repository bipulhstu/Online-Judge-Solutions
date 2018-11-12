#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x;
    std::cin >> x;
    for(int i = 0; i < x; i++){
       std::string s;
        std::string s1, s2;
        std::cin >> s;
        for(int j=0; j < s.size(); j++){
            if(j%2==0){
                s1 += s[j];
            }else{
                s2+= s[j];
            }
        }
        std::cout << s1 << " " << s2 <<endl;
    }
    return 0;
}

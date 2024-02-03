#include <iostream>

using namespace std;

int main(void){
    int n,d,count=0;
    cin>>n>>d;

    for(int i=1;i<=n;i++){
        string s = to_string(i);
        for(int j=0;j<s.length();j++){
            if(s[j]-'0'== d)count++;
        }
    }
    cout<<count<<'\n';
}
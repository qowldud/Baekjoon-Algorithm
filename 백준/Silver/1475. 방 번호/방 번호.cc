#include <iostream>
#include <unordered_map>
using namespace std;

int main(void){
    string s;
    cin>>s;
    int a = s.length();
    int b;
    unordered_map<int, int> m;
    for(int i=0;i<a;i++){
        b = s[i]-'0';
        if(b==9)b=6;
        if(m.find(b)!=m.end())m[b]+=1;
        else {
            m.insert({b,1});
        }
    }
    if(m.find(6)!=m.end()){
        if(m[6]%2==0)m[6]/=2;
        else m[6] = m[6]/2+1;
    }
    int max = 0;
    for(auto iter = m.begin();iter != m.end();iter++){
        if(max<iter->second)max = iter->second;
    }
    cout<<max<<'\n';
}

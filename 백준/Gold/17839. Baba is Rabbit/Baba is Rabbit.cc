#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int num;
    cin>>num;
    string a,b,c,s;
    unordered_map<string, string> m;
    vector<string> v,v1;
    for(int i=0;i<num;i++){
        cin>>a>>b>>c;
        if(a=="Baba"){
            v1.push_back(c);
            v.push_back(c);
        }
        m.insert({a,c});
    }
    for(int i=0;i<v1.size();i++){
        s = v1[i];
        while(m.find(s)!=m.end()){
            s = m[s];
            v.push_back(s);
        }
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<'\n';
    }
}
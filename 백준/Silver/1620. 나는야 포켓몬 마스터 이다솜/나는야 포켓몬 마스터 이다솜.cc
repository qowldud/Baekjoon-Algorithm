#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num1,num2;
    cin>>num1>>num2;
    vector<string> v;
    unordered_map<string, int> m;
    string s;
    for(int i=0;i<num1;i++){
        cin>>s;
        v.push_back(s);
        m.insert({s,i+1});
    }
    for(int i=0;i<num2;i++){
        cin>>s;
        if(atoi(s.c_str())){
            int k = stoi(s);
            cout<<v[k-1]<<'\n';
        }
        else cout<<m[s]<<'\n';
    }
}
#include <iostream>
#include <map>
using namespace std;


int main(void){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<string, string> m1;
    int num1,num2;
    cin>>num1>>num2;
    for(int i=0;i<num1;i++){
        string s1,s2;
        cin>>s1>>s2;
        m1.insert({s1,s2});
    }
    for(int i=0;i<num2;i++){
        string s;
        cin>>s;
        cout<<m1[s]<<'\n';
    }
}
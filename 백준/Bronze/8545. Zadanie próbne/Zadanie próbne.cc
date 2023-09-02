#include <iostream>
#include <vector>
using namespace std;

int main(void){
    string s;
    vector<char> v;
    cin>>s;
    for(int i=0;i<s.length();i++){
        v.push_back(s[i]);
    }
    for(int i=s.length()-1;i>=0;i--){
        cout<<v[i];
    }
}
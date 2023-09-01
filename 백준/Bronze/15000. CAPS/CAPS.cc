#include <iostream>
#include <vector>
using namespace std;

int  main(void){
    string s;
    cin>>s;
    vector<char> v;
    for(int i=0;i<s.length();i++){
        char c = s[i]-32;
        cout<<c;
           }
}
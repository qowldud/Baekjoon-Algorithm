#include <iostream>

using namespace std;

int main(void){
    string s;
    cin>>s;
    
    if(s[0] == s[1]){
        cout<<1;
    }else{
        cout<<0;
    }
}
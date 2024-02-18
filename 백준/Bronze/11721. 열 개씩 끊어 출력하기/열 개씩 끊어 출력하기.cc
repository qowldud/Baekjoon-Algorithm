#include <iostream>

using namespace std;

int main(void){
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++){
        cout<<s[i];
        if(i%10==9 && i!=0){
            cout<<'\n';
        }
    }
}
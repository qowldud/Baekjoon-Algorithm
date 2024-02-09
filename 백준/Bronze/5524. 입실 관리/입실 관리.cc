#include <iostream>

using namespace std;

int main(void){
    int num;
    cin>>num;
    
    while(num--){
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if((s[i]>=65)&&(s[i]<=90))s[i] = s[i]+32;
        }
        cout<<s<<'\n';
    }
}

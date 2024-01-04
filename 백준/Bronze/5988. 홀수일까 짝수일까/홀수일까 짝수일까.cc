#include <iostream>

using namespace std;

int main(void){
    int num;
    cin>>num;
    
    for(int i = 0; i < num; i++){
        string s;
        cin>>s;
        int len = s.length();
        int k = s[len-1] - '0';
        if(k%2==0) cout<<"even"<<'\n';
        else cout<<"odd"<<'\n';
    }
}
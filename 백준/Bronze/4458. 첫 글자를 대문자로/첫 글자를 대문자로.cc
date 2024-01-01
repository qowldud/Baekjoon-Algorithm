#include <iostream>

using namespace std;

int main(void){
    int num;
    cin>>num;
    cin.ignore(); // 엔터키 무시
    for(int i = 0;i < num;i++){
        string s;
        getline(cin, s);
        if(97<=s[0] && s[0]<=122){
            s[0] = s[0] - 32;
        }
        cout<<s<<'\n';
    }
}
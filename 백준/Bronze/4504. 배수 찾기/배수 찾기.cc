#include <iostream>

using namespace std;

int main(void){
    int num;
    cin>>num;
    
    while(1){
        int a;
        cin>>a;
        if(a==0) break;
        if(a%num == 0){
            cout<<a<<" is a multiple of "<<num<<'.'<<'\n';
        }
        else{
            cout<<a<<" is NOT a multiple of "<<num<<'.'<<'\n';
        }
    }
}
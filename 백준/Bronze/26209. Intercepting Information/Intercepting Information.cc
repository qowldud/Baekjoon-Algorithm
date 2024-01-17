#include <iostream>

using namespace std;

int main(void){
    bool BOOL = true;
    
    for(int i = 0; i < 8; i++){
        int a;
        cin>>a;
        if(a==9)BOOL = false;
    }
    if(BOOL) cout<<"S"<<'\n';
    else cout<<"F"<<'\n';
}
#include <iostream>

using namespace std;

int main(void){
    int T;
    cin>>T;
    
    for(int i=0;i<T;i++){
        int a,b;
        cin>>a>>b;
        if(a<b) cout<<"NO BRAINS"<<'\n';
        else cout<<"MMM BRAINS"<<'\n';
    }
}
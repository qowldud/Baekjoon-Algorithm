#include <iostream>

using namespace std;

int main(void){
    while(1){
        int a;
        cin>>a;
        if(a == 0)break;
        
        for(int i=1;i<=a;i++){
            for(int j=0;j<i;j++){
                cout<<"*";
            }
            cout<<'\n';
        }
    }
}
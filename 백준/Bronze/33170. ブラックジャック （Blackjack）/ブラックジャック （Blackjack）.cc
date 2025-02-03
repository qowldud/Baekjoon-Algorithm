#include <iostream>

using namespace std;

int main(void){
    int a,b,c;
    cin>>a>>b>>c;
    
    int k = a+b+c;
    
    if(k <= 21){
        cout<<1;
    }else{
        cout<<0;
    }
}
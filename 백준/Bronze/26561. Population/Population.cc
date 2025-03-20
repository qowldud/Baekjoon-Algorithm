#include <iostream>

using namespace std;

int main(void){
    int num;
    cin>>num;
    
    for(int i=0;i<num;i++){
        int a,b;
        cin>>a>>b;
        
        int result = a + b/4 - b/7;
        cout<<result<<'\n';
    }
}
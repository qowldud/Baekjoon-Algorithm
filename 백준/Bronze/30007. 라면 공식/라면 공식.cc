#include <iostream>

using namespace std;

int main(void){
    int N;
    cin>>N;
    
    for(int i=0;i<N;i++){
        int A,B,X;
        cin>>A>>B>>X;
        
        cout<<A*(X-1) + B<<'\n';
    }
}
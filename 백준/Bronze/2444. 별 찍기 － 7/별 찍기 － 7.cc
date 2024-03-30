#include <iostream>

using namespace std;

int main(void){
    int N;
    cin>>N;
    
    int k = 2*N-1;
    
    for(int i=1;i<=k;i++){
        if(i<=N){
            for(int j=1;j<=(N-i);j++){
                cout<<" ";
            }
            for(int j=1;j<=2*i-1;j++){
                cout<<"*";
            }
            cout<<'\n';
        }
        else{
            int num = 2*N-i;
            for(int j=1;j<=(N-num);j++){
                cout<<" ";
            }
            for(int j=1;j<=2*num-1;j++){
                cout<<"*";
            }
            cout<<'\n';
        }
    }
}

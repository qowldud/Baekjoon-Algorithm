#include <iostream>

using namespace std;

int main(void){
    int Array[4] = {-1,1,0,0};
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int a,b;
        cin>>a>>b;
        if(Array[a] == 1|| Array[b] == 1){
            int t = Array[a];
            Array[a] = Array[b];
            Array[b] = t;
        }
    }
    
    for(int i=1;i<=3;i++){
        if(Array[i]==1){
            cout<<i<<'\n';
            exit(0);
        }
    }
}

#include <iostream>

using namespace std;

int main(void){
    int num, sum = 0;
    cin>>num;
    for(int i=0;i<num;i++){
        int a;
        cin>>a;
        sum+=a;
    }
    
    cout<<sum-(num-1)<<'\n';
}
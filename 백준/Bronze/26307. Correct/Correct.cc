#include <iostream>

using namespace std;

int main(void){
    int H,M;
    cin>>H>>M;
    
    int a = H-9;
    cout<<a*60 + M<<'\n';
}
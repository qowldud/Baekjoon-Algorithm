#include <iostream>
using namespace std;

int main(void){
    int num;
    cin>>num;
    int a = 2*num-1;
    for(int i=0;i<num;i++){
        for(int j=0;j<a-i;j++){
            if(i<=j)cout<<'*';
            else cout<<' ';
        }
        cout<<'\n';
    }
}
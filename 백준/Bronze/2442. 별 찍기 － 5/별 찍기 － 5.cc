#include <iostream>
using namespace std;

int main(void){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        for(int j=1;j<=num+i;j++){
            if((num-i)<=j&&(num+i)>=j)cout<<'*';
            else cout<<' ';
        }
        cout<<'\n';
    }
}
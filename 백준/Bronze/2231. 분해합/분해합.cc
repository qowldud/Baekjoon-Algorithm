#include <iostream>
using namespace std;

int main(void){
    int num,a,b,sum = 0;
    bool BOOL;
    cin>>num;
    for(int i=1;i<num;i++){
        BOOL = false;
        a = i;
        sum = a;
        while(a/10){
            sum+=a%10;
            a=a/10;
        }
        sum+=a%10;
        if(sum==num){
            BOOL = true;
            b = i;
            break;
        }
    }
    if(BOOL)cout<<b<<'\n';
    else cout<<0<<'\n';
}
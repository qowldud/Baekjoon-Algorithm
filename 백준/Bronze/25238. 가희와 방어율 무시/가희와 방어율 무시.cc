#include <iostream>
using namespace std;

int main(void){
    double a,b;
    cin>>a>>b;
    if(a*((100-b)/100)<100)cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
}
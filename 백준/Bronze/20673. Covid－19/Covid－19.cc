#include <iostream>
using namespace std;

int main(void){
    int a,b;
    cin>>a>>b;
    if(a<=50&&b<=10)cout<<"White";
    else if(b>30)cout<<"Red";
    else cout<<"Yellow";
}
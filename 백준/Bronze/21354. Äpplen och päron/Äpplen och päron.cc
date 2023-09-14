#include <iostream>
using namespace std;

int main(void){
    int a,b;
    cin>>a>>b;
    int apple = a*7;
    int peer = b*13;
    if(apple>peer)cout<<"Axel";
    else if(apple<peer)cout<<"Petra";
    else cout<<"lika";
}
#include <iostream>

using namespace std;

int main(void){
    float a;
    cin>>a;
    if(a==999)return 0;
    while(1){
        float b;
        cin>>b;
        if(b==999)break;
        cout<<fixed;
        cout.precision(2);
        cout<<b-a<<'\n';
        a = b;

    }
}
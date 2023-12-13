#include <iostream>

using namespace std;

int main(void){
    int N,A,B;
    cin>>N>>A>>B;
    if(N>B)cout<<"Bus"<<'\n';
    else{
        if(A<B)cout<<"Bus"<<'\n';
        else if(A==B)cout<<"Anything"<<'\n';
        else cout<<"Subway"<<'\n';
    }
}
#include <iostream>
using namespace std;

long long A,B,C;
long long f(long long y){
    if(y==1) return A%C;

    long long k = f(y/2)%C;

    if(y%2==0)return k*k%C;
    else return k*k%C*A%C;
}

int main(void){
    cin>>A>>B>>C;
    long long num = f(B);
    cout<<num<<'\n';
}
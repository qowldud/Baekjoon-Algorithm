#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int A, B, N, num1;
    cin>>A>>B>>N;
    for(int i=0;i<=N;i++){
    if(i!=N){
    num1 = A%B;
    num1 = num1*10;
    A=num1;
    }
    else{
        num1/=B;
    }
    }
    cout<<num1<<'\n';
}
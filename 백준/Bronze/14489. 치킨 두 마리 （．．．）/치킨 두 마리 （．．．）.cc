#include <iostream>

using namespace std;

int main(void){
    int A,B,C,price;
    cin>>A>>B>>C;
    price = A+B;
    if((A+B) >= 2*C) {
        price = (A+B) - 2*C;
    }
    cout<<price;
}
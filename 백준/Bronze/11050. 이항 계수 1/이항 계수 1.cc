#include <iostream>
using namespace std;

int main(void){
    int a,b;
    cin>>a>>b;
    int num1 = 1, num2 = 1;
    int k = b;
    for(int i=0;i<k;i++){
        num1*=a;
        a-=1;
        num2*=b;
        b-=1;

    }
    cout<<num1/num2<<endl;
    return 0;
    
}
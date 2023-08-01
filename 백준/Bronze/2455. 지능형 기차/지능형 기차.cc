#include <iostream>
using namespace std;

int main(void){
    int a,b,sum = 0, max = 0;
    for(int i=0;i<4;i++){
        cin>>a>>b;
        sum += b;
        sum -= a;
        if(sum>max)max = sum;
    }
    cout<<max<<'\n';
}
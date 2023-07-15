#include <iostream>
using namespace std;

int main(void){
    int num, a, sum, b, num1;
    cin>>num;
    a = num/5;
    for(int i=a;i>=0;i--){
        sum = 0;
        num1 = num;
        b = 5*i;
        num1-=b;
        if(num1%3==0){
            sum+=i;
            sum+=num1/3;
            break;
        }
    }
    if(sum==0)cout<<-1<<'\n';
    else cout<<sum<<'\n';
}
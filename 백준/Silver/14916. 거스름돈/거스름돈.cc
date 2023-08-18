#include <iostream>
using namespace std;

int main(void){
    int num, k = 0;
    cin>>num;
    while(1){
        int a = num/5-k;
        int b = num-5*a;
        if(a==0&&b%2!=0){
            cout<<-1<<'\n';
            break;
        }
        else if(b%2==0){
            cout<<a+b/2<<'\n';
            break;
        }
        else{
            k++;
        }
    }
}
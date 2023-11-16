#include <iostream>
using namespace std;

int main(void){
    int num,sum = 0;
    cin>>num;
    num = (1000-num);
    if(num/500!=0){
        sum+=(num/500);
        num%=500;
        if(num==0){
            cout<<sum<<'\n';
            return 0;
        }
    }
    if(num/100!=0){
        sum+=(num/100);
        num%=100;
        if(num==0){
            cout<<sum<<'\n';
            return 0;
        }
    }
    if(num/50!=0){
        sum+=(num/50);
        num%=50;
        if(num==0){
            cout<<sum<<'\n';
            return 0;
        }
    }
    if(num/10!=0){
        sum+=(num/10);
        num%=10;
        if(num==0){
            cout<<sum<<'\n';
            return 0;
        }
    }
    if(num/5!=0){
        sum+=(num/5);
        num%=5;
    }
    sum+=num;
    cout<<sum<<'\n';
    
}
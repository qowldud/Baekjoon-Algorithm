#include <iostream>
using namespace std;

int main(void){
    while(1){
        int num,sum;
        cin>>num;
        if(num==0)break;
        else{
            if(num<10) sum = num;
            while(num>=10){
                sum = 0;
                while(num>0){
                    sum+=num%10;
                    num/=10;
                }
                num = sum;
            }
            cout<<sum<<'\n';
        }
    }
}
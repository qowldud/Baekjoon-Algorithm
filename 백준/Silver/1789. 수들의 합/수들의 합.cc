#include <iostream>
using namespace std;

int main(void){
    long long num,a = 0;
    long count = 0;
    cin>>num;
    while(a<=num){
        count++;
        a+=count;
    }
    a-=count;
    count--;
    while(1){
        if((num-a)<=count){
            a-=count;
            count--;
        }
        else break;
    }
    cout<<count+1<<'\n';

}
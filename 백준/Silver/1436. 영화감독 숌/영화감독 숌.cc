#include <iostream>
using namespace std;

int main(void){
    int num, count = 0, k=0;
    cin>>num;
    int a = 666;
    while(1){
        int h = a;
        count = 0;
        while(h>0){
        if((h%10)==6){
            count++;
            if(count == 3)k++;
            if(k==num){
                cout<<a<<'\n';
                exit(0);
            }
        }
        else {
            count = 0;
        }
        h/=10;
        }
        a++;
    }
}
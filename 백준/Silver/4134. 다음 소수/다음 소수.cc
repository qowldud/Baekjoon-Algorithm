#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    long long case1;
    cin>>case1;
    for(int i=0;i<case1;i++){
        long long num,k;
        cin>>num;
        k = num;
        while(1){
            bool BOOL = true;
            if(k==1||k==0){
                k = 2;
            }
            else{
            for(int j = 2;j<=sqrt(k);j++){
                if(k%j==0){
                    BOOL = false;
                    break;
                }
            }
            }
            if(BOOL){
                cout<<k<<'\n';
                break;
            }
            else k++;
        }
    }
}
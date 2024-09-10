#include <iostream>
#include <string>

using namespace std;

int main(void){
    int N;
    cin>>N;
    int clothes[6];
    for(int i=0;i<6;i++){
        cin>>clothes[i];
    }
    int T, P;
    cin>>T>>P;
    int a = 0;
    for(int i=0;i<6;i++){
        if(clothes[i] != 0){
            a+=clothes[i]/T;
            if(clothes[i]%T !=0){
                a++;
            }
        }
    }
    int b = N/P;
    int c = N%P;
    cout<<a<<'\n'<<b<<" "<<c;
    
}
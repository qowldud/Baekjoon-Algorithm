#include <iostream>
using namespace std;

int main(void){
    int num,N,M;
    long long count;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>N>>M;
        count = 1;
        int a = 1;
        for(int i=M;i>M-N;i--){
            count *= i;
            count /= a++;
        }
        cout<<count<<'\n';
    }
}
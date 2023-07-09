#include <iostream>
#include <deque>
using namespace std;

int main(void){
    deque<int> dq;
    int N,K;
    cin>>N>>K;
    for(int i=0;i<N;i++){
        dq.push_back(i+1);
    }
    cout<<"<";
    for(int i=0;i<N;i++){
        for(int j=0;j<K-1;j++){
            int a = dq[0];
            dq.push_back(a);
            dq.pop_front();
        }
        cout<<dq[0];
        dq.pop_front();
        if(i!=N-1)cout<<", ";
    }
    cout<<">";
    return 0;
}
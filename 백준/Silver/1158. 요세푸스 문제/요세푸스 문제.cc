#include <iostream>
#include <deque>

using namespace std;

int main(void){
    int N,K;
    deque<int> d,d1;
    cin>>N>>K;
    for(int i=0;i<N;i++){
        d.push_back(i+1);
    }
    while(d.size()!=0){
        for(int i=0;i<K-1;i++){
            int a = d.front();
            d.push_back(a);
            d.pop_front();
        }
        d1.push_back(d.front());
        d.pop_front();
    }
    cout<<"<";
    for(int i=0;i<N;i++){
        cout<<d1[i];
        if(i!=N-1)cout<<", ";
    }
    cout<<">";
}

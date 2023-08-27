#include <iostream>
#include <queue>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num;
    cin>>num;
    priority_queue<int> pq;
    for(int i=0;i<num;i++){
        int a;
        cin>>a;
        if(a==0){
            if(pq.size()==0)cout<<0<<'\n';
            else{
                cout<<pq.top()<<'\n';
                pq.pop();
            }
        }
        else{
            pq.push(a);
        }
    }
}
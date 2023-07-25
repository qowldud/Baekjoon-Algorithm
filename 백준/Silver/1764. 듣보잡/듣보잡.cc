#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,M, count = 0;
    cin>>N>>M;
    string p1[N];
    string p2[M];
    deque<string> q;
    for(int i=0;i<N;i++){
        cin>>p1[i];
    }

    for(int i=0;i<M;i++){
        cin>>p2[i];
    }
    sort(p1,p1+N);
    sort(p2,p2+M);
        for(int j=0;j<M;j++){
            if(binary_search(p1,p1+N,p2[j])){
                q.push_back(p2[j]);
                count+=1;
            }
        }
        cout<<count<<'\n';
        for(int i=0;i<count;i++){
            cout<<q.front()<<'\n';
            q.pop_front();
        }
}
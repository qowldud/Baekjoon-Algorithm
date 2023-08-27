#include <iostream>
#include <queue>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num;
    cin>>num;
    priority_queue<int, vector<int>, greater<int>> pq2;
    priority_queue<int> pq1;
    for(int i=0;i<num;i++){
        long long a;
        cin>>a;
        if(a==0){
            if(pq1.size()==0&&pq2.size()==0)cout<<0<<'\n';
            else{
                if(pq1.size()==0&&pq2.size()!=0){
                    cout<<pq2.top()<<'\n';
                    pq2.pop();
                }
                else if(pq1.size()!=0&&pq2.size()==0){
                    cout<<pq1.top()<<'\n';
                    pq1.pop();
                }
                else{
                    int b = pq1.top();
                    b = (-b);
                    if(b<=pq2.top()){
                        cout<<pq1.top()<<'\n';
                        pq1.pop();
                    }
                    else{
                        cout<<pq2.top()<<'\n';
                        pq2.pop();
                    }
                }
            }
        }
        else{
            if(a<0) pq1.push(a);
            else pq2.push(a);
        }
    }
}
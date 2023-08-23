#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

long long A,B,result=-1;
queue<pair<long long,long long>> q;

bool visit(long long a){
    if(a>1000000000)return false;
    else return true;
}

void bfs(long long a){
    while(!q.empty()){
        long long data = q.front().first;
        long long time = q.front().second;
        q.pop();
        if(data == B){
            result = time+1;
            break;
        }
        if(visit(data*2)){
        q.push({data*2,time+1});
        }
        if(visit(data*10+1)){
        q.push({data*10+1,time+1});
        }
    }

}
int main(void){
    cin>>A>>B;
    q.push({A,0});
    bfs(A);
    cout<<result<<'\n';
}
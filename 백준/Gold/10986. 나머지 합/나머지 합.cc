#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long N,M, answer = 0;
    cin>>N>>M;
    long long s[N+1] = {};
    long long c[M] = {};
    
    for(int i=1;i<=N;i++){
        int a;
        cin>>a;
        s[i] = (s[i-1] + a) % M;
        
        if(s[i] == 0)answer++;
        c[s[i]]++;
    }
    
    for(int i=0;i<M;i++){
        answer += c[i]*(c[i] - 1)/2;
    }
    
    cout<<answer<<'\n';
    
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N,M, count = 0;
    cin>>N>>M;
    vector<int>v;
    
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    
    sort(v.begin(), v.end());
    
    int i = 0, j = N-1;
    
    while(i < j){
        if(v[i] + v[j] > M){
            j--;
        }else if(v[i] + v[j] < M){
            i++;
        }else if(v[i] + v[j] == M){
            i++;
            j--;
            count++;
        }
    }
    
    cout<<count;
}
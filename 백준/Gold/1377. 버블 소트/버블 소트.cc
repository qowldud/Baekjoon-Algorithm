#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, max = 0;
    cin>>N;
    vector<pair<int,int>> A(N);
    
    for(int i=0;i<N;i++){
        cin>>A[i].first;
        A[i].second = i;
    }
    
    sort(A.begin(), A.end());
    
    for(int i=0;i<N;i++){
        int k = A[i].second - i;
        if(k > max) max = k;
    }
    cout<<max + 1;
}
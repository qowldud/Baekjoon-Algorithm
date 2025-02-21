#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, count = 0;
    cin>>N;
    vector<long long> v(N,0);
    
    for(int i=0;i<N;i++){
        cin>>v[i];
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0;i<N;i++){
        int a = 0, b = N-1;
        long long k = v[i];
        
        while(a < b){
            if(v[a] + v[b] < k){
                a++;
            }else if(v[a] + v[b] > k){
                b--;
            }else{
                if(a != i && b != i){
                    count++;
                    break;
                } else if(a == i){
                    a++;
                }else if(b == i){
                    b--;
                }

            }
        }
    }
    
    cout<<count;
}
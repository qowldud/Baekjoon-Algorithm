#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, total_length = 64, length = 64, count = 0;
    cin>>N;
    
    if(N == 64){
        cout<<1;
        return 0;
    }
    
    while(1){
        
        int mid = length / 2;
        
        if(mid == N){
            cout<<1;
            break;
        }
        
        
        if(total_length - mid > N){
            length = mid;
            total_length -= mid;
        }else if(total_length - mid == N){
            count++;
            cout<<count;
            break;
        }else{
            count++;
            length = mid;
        }
    }
}
#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, count = 1, sum = 1;
    int start_index = 1, end_index = 1;
    cin>>N;
    
    while(start_index <= end_index){
        if(sum < N){
            end_index++;
            sum += end_index;
        }else if(sum > N){
            sum = sum - start_index;
            start_index++;
        } else if(sum == N){
            count++;
            sum = sum - start_index;
            start_index++;
        }
    }
    
    cout<<count-1;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    long long N,M;
    long long left,right,sum,cur;
    cin>>N>>M;
    long long array[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    sort(array,array+N);
    left = 1;
    right = array[N-1];
    long long mid;
    while(1){
        sum = 0;
        mid = (left + right)/2;
        for(int i=0;i<N;i++){
            sum += array[i]/mid;
        }
        if(sum>=M){
            cur = mid;
            left = mid+1;
        }
        else right = mid-1;
        if(left>right)break;
    }
    cout<<cur<<'\n';
}
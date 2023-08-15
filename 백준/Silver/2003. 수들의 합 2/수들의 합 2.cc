#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int N,M,a,count = 0;
    vector<int> v;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<N;i++){
        int sum = 0;
        for(int j=i;j<N;j++){
            sum +=v[j];
            if(sum == M){
                count +=1;
                break;
            }
        }
    }
    cout<<count<<'\n';
}
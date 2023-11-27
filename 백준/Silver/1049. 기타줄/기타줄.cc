#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int N,M;
    cin>>N>>M;
    int sum = 0;
    vector<int> v1,v2;
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int first = v1[0];
    int second = v2[0]*6;
    if(first>=second){
        cout<<v2[0]*N<<'\n';
    }
    else{
        int p = N/6;
        N%=6;
        sum +=p*v1[0];
        if(first<=v2[0]*N){
            sum += first;
        }
        else{
            sum += v2[0]*N;
        }
        cout<<sum<<'\n';
    }

}
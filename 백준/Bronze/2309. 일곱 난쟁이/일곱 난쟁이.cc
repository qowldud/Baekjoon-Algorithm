#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int sum = 0,a,b,num;
    vector<int> v;
    for(int i=0;i<9;i++){
        cin>>num;
        v.push_back(num);
        sum += num;
    }
    for(int i=0;i<8;i++){
        for(int j=i+1;j<9;j++){
            if((sum-v[i]-v[j])==100){
                v.erase(v.begin()+j);
                v.erase(v.begin()+i);
                sort(v.begin(),v.end());
                for(int k=0;k<v.size();k++){
                     cout<<v[k]<<'\n';
                }
                exit(0);
            }
        }
    }
}
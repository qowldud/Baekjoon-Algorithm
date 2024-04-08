#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int num;
    vector<int> v;
    cin>>num;
    
    for(int i=0;i<num;i++){
        v.clear();
        for(int j=0;j<10;j++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end(),greater<int>());
        cout<<v[2]<<'\n';
    }
}
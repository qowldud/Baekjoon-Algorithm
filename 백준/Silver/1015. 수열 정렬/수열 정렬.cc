#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, int>> v;

int main(void){
    int num;
    cin>>num;
    int p[num];
    for(int i=0;i<num;i++){
        int a;
        cin>>a;
        v.push_back(make_pair(a,i));
    }
    sort(v.begin(),v.end());
    for(int  i=0;i<num;i++){
        p[v[i].second] = i;
    }
    for(int i=0;i<num;i++){
        cout<<p[i]<<" ";
    }
}
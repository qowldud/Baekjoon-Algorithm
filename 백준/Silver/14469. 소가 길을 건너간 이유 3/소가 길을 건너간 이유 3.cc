#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int num;
    int time;
    cin>>num;
    vector<pair<int, int>> v;
    for(int i=0;i<num;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());

    time = v[0].first + v[0].second;
    for(int i=1;i<num;i++){
        if(time<=v[i].first) time = v[i].first + v[i].second;
        else time += v[i].second;
    }
    cout<<time<<'\n';
}
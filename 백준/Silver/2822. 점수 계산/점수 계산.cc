#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int a, sum = 0;
    map<int, int> m;
    vector<int> v;
    for(int i=0;i<8;i++){
        cin>>a;
        m.insert({a,i+1});
    }
    auto first = m.begin();
    advance(first,3);
    m.erase(m.begin(),first);
    for(auto iter = m.begin();iter!=m.end();iter++){
        sum += iter->first;
        int num = iter->second;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    cout<<sum<<'\n';
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
    
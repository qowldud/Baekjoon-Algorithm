#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num;
    cin>>num;
    vector<int> v1;
    vector <int> v2;
    map<int, int> m;
    for(int i=0;i<num;i++){
        int a;
        cin>>a;
        v1.push_back(a);
        v2.push_back(a);
    }
    sort(v1.begin(),v1.end());
    v1.erase(unique(v1.begin(),v1.end()),v1.end());
    for(int i=0;i<v1.size();i++){
        m.insert({v1[i],i});
    }
    for(int i=0;i<num;i++){
        cout<<m[v2[i]]<<" ";
    }
}

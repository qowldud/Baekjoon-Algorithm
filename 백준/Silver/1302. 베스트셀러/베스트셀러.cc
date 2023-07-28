#include <iostream>
#include <map>
#include <deque>
#include <algorithm>
using namespace std;

int main(void){
    int num;
    cin>>num;
    deque<string> q;
    map<string,int> m;
    for(int i=0;i<num;i++){
        string s;
        cin>>s;
        if(m.find(s)!=m.end())m[s]+=1;
        else{
            m.insert({s,1});
        }
    }
    int max = 0;
    for(auto iter=m.begin();iter!=m.end();iter++){
        if(max<iter->second){
            max = iter -> second;
        }
    }
    for(auto iter=m.begin();iter!=m.end();iter++){
        if(iter->second == max)q.push_back(iter -> first);
    }
    sort(q.begin(),q.end());
    cout<<q.front()<<'\n';
}
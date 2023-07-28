#include <iostream>
#include <map>
#include <deque>
#include <algorithm>
using namespace std;

int main(void){
    int num;
    deque<string> q;
    cin>>num;
    map<string, string> m1;
    for(int i=0;i<num;i++){
        string s1,s2;
        cin>>s1>>s2;
        if(m1.find(s1)!=m1.end())m1[s1] = s2;
        else m1.insert({s1,s2});
    }
    for(auto iter = m1.begin();iter != m1.end();iter++){
        if(iter->second == "enter")q.push_back(iter->first);
    }
    int count = q.size();
    sort(q.begin(),q.end(),greater<string>());
    for(int i=0;i<count;i++){
        cout<<q.front()<<'\n';
        q.pop_front();
    }
}
#include <iostream>
#include <map>
using namespace std;

int main(void){
    int N,M;
    int count = 0;
    cin>>N>>M;
    map<string,int> m;
    for(int i=0;i<N;i++){
        string s;
        cin>>s;
        m.insert({s,0});
    }
    for(int i=0;i<M;i++){
        string s1;
        cin>>s1;
        if(m.find(s1)!=m.end())count += 1;
    }
    cout<<count<<'\n';
}
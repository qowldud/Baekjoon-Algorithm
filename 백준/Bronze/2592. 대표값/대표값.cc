#include <iostream>
#include <unordered_map>
using namespace std;

int main(void){
    int a;
    int num;
    int max = 0, sum = 0;
    unordered_map<int, int> m;
    for(int i=0;i<10;i++){
        cin>>a;
        sum+=a;
        if(m.find(a)!=m.end())m[a]+=1;
        else{
            m.insert({a,1});
        }
    }
    for(auto iter = m.begin();iter != m.end();iter++){
        if(max<iter->second){
            max = iter->second;
            num = iter -> first;
        }
    }
    cout<<sum/10<<'\n'<<num<<'\n';
}
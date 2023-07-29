#include <iostream>
#include <map>
using namespace std;

int main(void){
    int num;
    map<long long, long long> m;
    cin>>num;
    for(int i=0;i<num;i++){
        long long a;
        cin>>a;
        if(m.find(a)!=m.end())m[a]+=1;
        else {
            m.insert({a,1});
        }
    }
    long long max = 0;
    long long result;
    for(auto iter = m.begin();iter != m.end();iter++){
        if(max<iter -> second){
            max = iter -> second;
            result = iter ->first;
        }
    }
    cout<<result<<'\n';
}
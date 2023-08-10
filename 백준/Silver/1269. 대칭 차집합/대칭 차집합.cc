#include <iostream>
#include <unordered_map>
using namespace std;

int main(void){
    int num1, num2,a,count = 0;
    cin>>num1>>num2;
    unordered_map<int, int> m1,m2;
    for(int i=0;i<num1;i++){
        cin>>a;
        m1.insert({a,0});
    }
    for(int i=0;i<num2;i++){
        cin>>a;
        m2.insert({a,0});
    }
    for(auto iter = m1.begin();iter != m1.end();iter++){
        if(!(m2.find(iter->first)!=m2.end()))count+=1;
    }
    for(auto iter = m2.begin();iter != m2.end();iter++){
        if(!(m1.find(iter->first)!=m2.end()))count+=1;
    }
    cout<<count<<'\n';
}
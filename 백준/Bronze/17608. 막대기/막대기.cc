#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(void){
    int num,a;
    cin>>num;
    vector<int> v;
    stack<int> s;
    for(int i=0;i<num;i++){
        cin>>a;
        v.push_back(a);
    }
    int max = v[num-1];
    for(int i=(num-1);i>=0;i--){
        if(s.empty())s.push(v[i]);
        else{
            if(max<v[i]){
                s.push(v[i]);
                max = v[i];
            }
        }
    }
    cout<<s.size()<<'\n';
}
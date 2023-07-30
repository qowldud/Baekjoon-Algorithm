#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num1, num2, a;
    while(1){
    cin>>num1>>num2;
    int count = 0;
    if(num1==0&&num2==0)exit(0);
    vector<int> v;
    for(int i=0;i<num1;i++){
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<num2;i++){
        cin>>a;
        if(binary_search(v.begin(),v.end(),a))count+=1;
    }
    cout<<count<<'\n';
    v.clear();
    }
}
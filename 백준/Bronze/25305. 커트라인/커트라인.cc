#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int num1,num2;
    cin>>num1>>num2;
    vector<int> v;
    for(int i=0;i<num1;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),greater<>());
    int cut = v[num2-1];
    cout<<cut;
}
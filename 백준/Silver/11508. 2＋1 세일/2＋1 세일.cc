#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int num, mini = 0;
    cin>>num;
    vector<int> v;
    for(int i=0;i<num;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end(),greater<>());

    for(int i=0;i<num;i++){
        if((i+1)%3!=0){
        mini += v[i];
        }
    }

    cout<<mini<<'\n';

}
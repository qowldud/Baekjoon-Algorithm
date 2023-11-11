#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main(void){
    int num,count = 1;
    cin>>num;
    vector<int> v;
    deque<int> d;
    for(int i=1;i<=num;i++){
        d.push_back(i);
    }
    
    while(d.size()!=1){
        int a = d.front();
        d.pop_front();
        if(count%2!=0){
            v.push_back(a);
            count++;
        }
        else {
            d.push_back(a);
            count++;
        }
    }
    v.push_back(d.front());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
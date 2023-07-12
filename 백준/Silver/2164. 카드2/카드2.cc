#include <iostream>
#include <deque>
using namespace std;

int main(void){
    int num, a;
    deque<int> que;
    cin>>num;
    for(int i=0;i<num;i++){
        que.push_back(i+1);
    }
    for(int i=0;i<num-1;i++){
        que.pop_front();
        int a = que.front();
        que.push_back(a);
        que.pop_front();
    }
    cout<<que.back()<<'\n';
}
#include <iostream>
#include <deque>
using namespace std;

int main(void){
    int num;
    int count = 0;
    bool BOOL = false;
    deque<int> que;
    cin>>num;
    for(int i=0;i<num;i++){
        int a;
        int BOOL = false;
        cin>>a;
        que.push_back(a);
        for(int i=0;i<que.size()-1;i++){
            if(que.at(i)==a){
                BOOL = true;
                break;
            }
        }
        if(BOOL)count+=1;
    }
    cout<<count<<'\n';
}
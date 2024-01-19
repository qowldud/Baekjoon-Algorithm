#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main(void){
    int num;
    cin>>num;
    deque<pair<int, int>> dq;
    vector<int> v;

    for(int i = 1; i <= num; i++){
        int number;
        cin>>number;
        dq.push_back(make_pair(i,number));
    }

    bool BOOL = true;

    for(int i = 0; i < num ; i++){
        int a;
        if(BOOL){
        v.push_back(dq.front().first);
        a = dq.front().second;
        dq.pop_front();
        } else{
            v.push_back(dq.back().first);
            a = dq.back().second;
            dq.pop_back();
        }

        if(i!=num-1){
        if(a > 0)BOOL = true;
        else {
            a = (-a);
            BOOL = false;
        }
        
        for(int j = 0; j < a-1;j++){
            if(BOOL){
                dq.push_back(dq.front());
                dq.pop_front();
            } else{
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout<<v[i];
        if(i!=v.size()-1)cout<<" ";
    }
}
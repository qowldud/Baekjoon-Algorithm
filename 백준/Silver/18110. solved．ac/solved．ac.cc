#include <iostream>
#include <cmath>
#include <deque>
#include <algorithm>
using namespace std;

int main(void){
    int num, a, c;
    int b = 0;
    double score = 0;
    deque<int> que;
    cin>>num;
    if(num == 0){
        cout<<0<<'\n';
        exit(0);
    }
    for(int i=0;i<num;i++){
        cin>>a;
        que.push_back(a);
    }
    sort(que.begin(),que.end());
    b = round(num*0.15);
    for(int i=0;i<b;i++){
        que.pop_front();
        que.pop_back();
    }
    c = que.size();
    for(int i=0;i<c;i++){
        score+=que.front();
        que.pop_front();
    }
    score = (double)score/c;
    score = round(score);
    cout<<score<<'\n';
    return 0;
}
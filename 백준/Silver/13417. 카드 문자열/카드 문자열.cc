#include <iostream>
#include <queue>

using namespace std;

int main(void){
    int count;
    cin>>count;

    while(count--){
        int num;
        cin>>num;

        deque<char> dq;
        for(int i = 0; i < num; i++){
            char c;
            cin>>c;
            if(i==0){
                dq.push_back(c);
            } else{
                if(dq.front()>=c)dq.push_front(c);
                else dq.push_back(c);
            }
        }
        
        for(int i=0; i < dq.size(); i++){
            cout<<dq[i];
        }
        if(count!=0)cout<<'\n';
    }
}
#include <iostream>
#include <stack>
#include <deque>
using namespace std;

int main(void){
    int num,a, max, now, size;
    bool BOOL = false;
    char plus = '+';
    char minus = '-';
    cin>>num;
    stack<int> s;
    deque<char> q;
    cin>>a;
    max = a;
    for(int i=1;i<=a;i++){
            s.push(i);
            q.push_back(plus);
        }
        s.pop();
        q.push_back(minus);
        for(int i=1;i<num;i++){
            cin>>a;
            if(max<a){
                for(int j=max+1;j<=a;j++){
                    s.push(j);
                    q.push_back(plus);

                }
                max = a;
                s.pop();
                q.push_back(minus);
            }
            else {
                if(s.top()!=a){
                BOOL = true;
            }
                    s.pop();
                    q.push_back(minus);
            }
    }
    size = q.size();
    if(BOOL){
        cout<<"NO"<<'\n';
    }
    else{
    for(int i=0;i<size;i++){
        cout<<q.front()<<'\n';
        q.pop_front();
    }
    }
}

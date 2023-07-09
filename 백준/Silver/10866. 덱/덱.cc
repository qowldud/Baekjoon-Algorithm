#include <iostream>
#include <deque>
using namespace std;

int main(void){
    int num;
    int a;
    string word;
    cin>>num;
    deque<int> dq;
    for(int i=0;i<num;i++){
        cin>>word;
        if(word.compare("push_back")==0){
            cin>>a;
            dq.push_back(a);
        }
        else if(word.compare("push_front")==0){
            cin>>a;
            dq.push_front(a);
        }
        else if(word.compare("front")==0){
            if(dq.size()==0)cout<<-1<<'\n';
            else{
            cout<<dq.front()<<'\n';
            }
        }
        else if(word.compare("back")==0){
            if(dq.size()==0)cout<<-1<<'\n';
            else{
                cout<<dq.back()<<'\n';
            }
        }
        else if(word.compare("size")==0){
            cout<<dq.size()<<'\n';
        }
        else if(word.compare("empty")==0){
            if(dq.empty())cout<<1<<"\n";
            else cout<<0<<'\n';
        }
        else if(word.compare("pop_front")==0){
            if(dq.size()==0)cout<<-1<<'\n';
            else {
                cout<<dq.front()<<'\n';
            dq.pop_front();
            }
        }
        else if(word.compare("pop_back")==0){
            if(dq.size()==0)cout<<-1<<'\n';
            else{
            cout<<dq.back()<<'\n';
            dq.pop_back();
            }
        }
    }
}
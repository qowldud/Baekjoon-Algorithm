#include <iostream>
#include <stack>
using namespace std;

int main(void){
    stack<int> stk;
    int num;
    string word;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>word;
        if(word.compare("push")==0){
            int a;
            cin>>a;
            stk.push(a);
        }
        else if(word.compare("pop")==0){
            if(stk.size()==0)cout<<-1<<'\n';
            else{
                cout<<stk.top()<<'\n';
                stk.pop();
            }
        }
        else if(word.compare("size")==0){
            cout<<stk.size()<<'\n';
        }
        else if(word.compare("empty")==0){
            if(stk.empty())cout<<1<<'\n';
            else cout<<0<<'\n';
        }
        else if(word.compare("top")==0){
            if(stk.size()==0)cout<<-1<<'\n';
            else cout<<stk.top()<<'\n';
        }
    }
    return 0;
}
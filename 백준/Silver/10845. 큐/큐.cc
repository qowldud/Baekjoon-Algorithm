#include <iostream>
#include <queue>
using namespace std;

int main(void){
    queue<int> q;
    int num;
    string word;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>word;
        if(word.compare("push")==0){
            int a;
            cin>>a;
            q.push(a);
        }
        else if(word.compare("pop")==0){
            if(q.size()==0)cout<<-1<<'\n';
             else{
                cout<<q.front()<<'\n';  
                q.pop(); 
             }     
        }
        else if(word.compare("size")==0){
            cout<<q.size()<<'\n';
        }
        else if(word.compare("empty")==0){
            if(q.empty())cout<<1<<'\n';
            else cout<<0<<'\n';
        }
        else if(word.compare("front")==0){
            if(q.size()==0)cout<<-1<<'\n';
            else cout<<q.front()<<'\n';
        }
        else if(word.compare("back")==0){
            if(q.size()==0)cout<<-1<<'\n';
            else cout<<q.back()<<'\n';
        }
        }
        return 0;
}
#include <iostream>
#include <stack>
using namespace std;

int main(void){
    string word;
    while(1){
    bool BOOL = false;
    stack<char> stk;
    getline(cin, word);
    if(word==".")break;
    for(int i=0;i<word.length();i++){
        if(word.at(i)=='('||word.at(i)=='['){
            stk.push(word.at(i));
        }
        else if(word.at(i)==')'){
            if(!stk.empty()&&stk.top()=='(')stk.pop();
            else {
                BOOL = true;
                break;
            }
        }
        else if(word.at(i)==']'){
            if(!stk.empty()&&stk.top()=='[')stk.pop();
            else{
                BOOL = true;
                break;
            }
        }
        }
        if(BOOL||!stk.empty())cout<<"no"<<'\n';
        else if(!BOOL)cout<<"yes"<<'\n';
    }
}
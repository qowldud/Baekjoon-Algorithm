#include <iostream>
#include <stack>
using namespace std;

int main(void){
    int num;
    int a;
    int sum = 0;
    cin>>num;
    stack<int> stk;
    for(int i=0;i<num;i++){
        cin>>a;
        if(a==0)stk.pop();
        else stk.push(a);
    }
    int k = stk.size();
    for(int i=0;i<k;i++){
        sum+=stk.top();
        stk.pop();
    }
    cout<<sum<<'\n';
}
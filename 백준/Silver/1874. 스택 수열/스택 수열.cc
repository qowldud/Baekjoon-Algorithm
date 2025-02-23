#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void){
    int N, num = 1;
    stack<int> s;
    vector<char> v;
    cin>>N;
    
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        
        if(a >= num){
            while(a >= num){
                s.push(num);
                num++;
                v.push_back('+');
            }
            s.pop();
            v.push_back('-');
        } else{
            if(a == s.top()){
                s.pop();
                v.push_back('-');
            } else{
                cout<<"NO"<<'\n';
                exit(0);
            }
        }
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<'\n';
    }
}
#include <iostream>
#include <stack>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    stack<int> s;
    cin>>N;
    int array[N];
    int result[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    
    for(int i=0;i<N;i++){
        if(s.empty()){
            s.push(i);
        }else{
            while(1){
                if(!s.empty() && array[s.top()] < array[i]){
                    result[s.top()] = array[i];
                    s.pop();
                }else{
                    s.push(i);
                    break;
                }
            }
        }
    }
    
    while(!s.empty()){
        result[s.top()] = -1;
        s.pop();
    }
    
    for(int i=0;i<N;i++){
        cout<<result[i]<<" ";
    }
}
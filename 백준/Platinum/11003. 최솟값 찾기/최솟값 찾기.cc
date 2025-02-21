#include <iostream>
#include <deque>

using namespace std;

typedef pair<int,int> Node;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N,L;
    deque<Node> dq;
    cin>>N>>L;
    int array[N] = {};
    
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    
    for(int i=0;i<N;i++){
        if(i == 0){
            dq.push_back(make_pair(i, array[i]));
        }else{
                int k = dq.size();
                for(int j=0;j<k;j++){
                    int num = dq.back().second;
                    if(num > array[i] && !dq.empty()){
                        dq.pop_back();
                    }else{
                        break;
                    }
                }
            if(i - dq.front().first + 1 > L && !dq.empty()){
                dq.pop_front();
            }
            dq.push_back(make_pair(i, array[i]));
        }
        cout<<dq.front().second<<" ";
    }
}
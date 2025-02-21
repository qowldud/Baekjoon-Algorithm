#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int num[4];
int result[4] = {};

void Add(char c){
    if(c == 'A'){
        result[0]++;
    }else if(c == 'C'){
        result[1]++;
    }else if(c == 'G'){
        result[2]++;
    }else if(c == 'T'){
        result[3]++;
    }
}

void Remove(char c){
     if(c == 'A'){
            result[0]--;
        }else if(c == 'C'){
            result[1]--;
        }else if(c == 'G'){
            result[2]--;
        }else if(c == 'T'){
            result[3]--;
        }   
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N,M, count = 0;
    string s;
    cin>>N>>M;
    cin>>s;
    int start_index = 0, end_index = M-1;
    
    for(int i=0;i<4;i++){
        cin>>num[i];
    }
    for(int i=start_index; i <= end_index; i++){
            Add(s[i]);
    }
    
    while(end_index < N){
        if(result[0] >= num[0] && result[1] >= num[1] && result[2]>=num[2] && result[3] >= num[3]){
            count++;
    }
    end_index++;
    Add(s[end_index]);
    Remove(s[start_index]);
    start_index++;
    }
    
    cout<<count;
}
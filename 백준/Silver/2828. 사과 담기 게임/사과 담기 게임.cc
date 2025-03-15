#include <iostream>

using namespace std;

int main(void){
    int N,M, num, count = 0;
    cin>>N>>M;
    cin>>num;
    int start = 1;
    int end = M;
    
    for(int i=0;i<num;i++){
        int a;
        cin>>a;
        if( start > a){
            int gap = start - a;
            count += gap;
            start -= gap;
            end -= gap;
        }else if(end < a){
            int gap = a - end;
            count += gap;
            start += gap;
            end += gap;
        }
    }
    
    cout<<count;
}
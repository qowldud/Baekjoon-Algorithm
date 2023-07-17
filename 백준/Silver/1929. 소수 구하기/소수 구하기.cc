#include <iostream>
using namespace std;

int main(void){
    int M,N;
    cin>>M>>N;
    int array[N+1];
    for(int i=0;i<=N;i++){
        array[i]=i;
    }
    for(int i=0;i<=N;i++){
        if(i==0||i==1){
            if(i==1)array[i]=0;
            continue;
        }
        else{
        if(array[i]!=0){
            for(int j=(i+i);j<=N;j+=i){
                array[j] = 0;
            }
        }
        else{
            continue;
        }
        }
    }
    for(int i=0;i<=N;i++){
        if(array[i]!=0&&array[i]>=M)cout<<array[i]<<'\n';
    }
}
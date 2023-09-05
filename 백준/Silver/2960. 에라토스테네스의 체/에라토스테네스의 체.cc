#include <iostream>
using namespace std;

int main(void){
    int N,K,count=0;
    cin>>N>>K;
    int array[N+1]={0};
    for(int i=2;i<=N;i++){
        if(array[i]==0){
            array[i] = 1;
            count += 1;
            if(count == K)cout<<i<<'\n';
            for(int j=i+1;j<N+1;j++){
                if(j%i==0&&array[j]==0){
                    array[j]=1;
                    count +=1;
                    if(count == K)cout<<j<<'\n';
                }
            }
        }
    }
 }
#include <iostream>
using namespace std;

int main(void){
    int N,M,max=0,a;
    cin>>N>>M;
    int array[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            for(int k=j+1;k<N;k++){
                a = array[i]+array[j]+array[k];
                if(M>=a&&max<a)max = a;
            }
        }
    }
    cout<<max<<'\n';
}
#include <iostream>
using namespace std;

int main(void){
    int N,a,b,count = 1,a1,b1;
    cin>>N>>a>>b;
    for(int i=0;i<N;i++){
            if(a==i+1)a1 = i;
            if(b==i+1)b1 = i;
        }
    while(1){
        if(a1/2==b1/2){
            cout<<count<<'\n';
            exit(0);
        }
        else{
            a1 = a1/2;
            b1 = b1/2;
            count +=1;
        }
    }
}
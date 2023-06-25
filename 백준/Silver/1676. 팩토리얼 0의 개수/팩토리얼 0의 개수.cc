#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main(void){
    int N;
    int count=0;
    cin>>N;
    for(int i=1;i<=N;i++){
        if(i%5==0)count+=1;
        if(i%25==0)count+=1;
        if(i%125==0)count+=1;
    }
    cout<<count<<endl;
    return 0;
}
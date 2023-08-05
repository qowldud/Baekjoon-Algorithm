#include <iostream>
using namespace std;

int main(void){
    int num;
    cin>>num;
    int a,b,ac=0,bc=0;
    for(int i=0;i<num;i++){
        cin>>a>>b;
        if(a>b) ac+=1;
        else if(a<b) bc+=1;
    }
    cout<<ac<<" "<<bc;
}
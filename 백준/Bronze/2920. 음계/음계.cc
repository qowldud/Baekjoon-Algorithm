#include <iostream>
using namespace std;

int main(void){
    int num[8];
    int count = 0;
    for(int i=0;i<8;i++){
        cin>>num[i];
    }
    for(int i=0;i<8;i++){
        if(num[i]==i+1)count+=1;
    }
    if(count==8){
        cout<<"ascending"<<endl;
        exit(0);
    }
    count = 0;
    for(int i=0;i<8;i++){
        if(num[i]==8-i)count+=1;
    }
    if(count==8){
        cout<<"descending"<<endl;
        exit(0);
    }
    if(count!=8)cout<<"mixed"<<endl;
    return 0;
}
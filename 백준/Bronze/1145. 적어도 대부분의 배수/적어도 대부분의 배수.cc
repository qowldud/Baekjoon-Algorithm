#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int array[5];
    int num = 1,count = 0;
    for(int i=0;i<5;i++){
        cin>>array[i];
    }
    while(1){
        for(int i=0;i<5;i++){
            if(num%array[i]==0)count++;
        }
        if(count>=3){
            cout<<num<<'\n';
            break;
        }
        else{
            num++;
            count = 0;
        }
    }
}
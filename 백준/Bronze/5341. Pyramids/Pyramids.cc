#include <iostream>
using namespace std;

int main(void){
    while(1){
        int a, count = 0, num = 1;
        cin>>a;
        if(a==0)break;
        else{
            for(int i=0;i<a;i++){
                count += num;
                num++;
            }
        }
        cout<<count<<'\n';
    }
}
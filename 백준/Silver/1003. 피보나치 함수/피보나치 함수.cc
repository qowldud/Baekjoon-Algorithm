#include <iostream>
using namespace std;

int main(void){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int a;
        int array[41] = {0,1,1,};
        cin>>a;
        if(a==0)cout<<1<<" "<<0<<'\n';
        else if(a==1)cout<<0<<" "<<1<<'\n';
        else
        {
            for(int i=3;i<=a;i++){
                array[i] = array[i-2] + array[i-1];
            }
            cout<<array[a-1]<<" "<<array[a]<<'\n';
        }
    }
}
#include <iostream>
using namespace std;

int main(void){
    int T;
    cin>>T;
    int array[3] = {300,60,10};
    int show[3] = {0,};
    if((T/array[0])!=0){
        show[0] = T/array[0];
        T%=array[0];
    }
    if((T/array[1])!=0){
        show[1] = T/array[1];
        T%=array[1];
    }
        show[2] = T/array[2];
        if(T%array[2]!=0){
            cout<<-1<<'\n';
            return 0;
        }
    for(int i=0;i<3;i++){
        cout<<show[i]<<" ";
    }
}
#include <iostream>
using namespace std;

int main(void){
    int num, D = 0, P = 0;
    cin>>num;
    char array[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    for(int i=0;i<num;i++){
        if(array[i]=='D')D+=1;
        else P+=1;
        if((D-P)==2||(P-D)==2)break;
    }
    cout<<D<<':'<<P<<'\n';
}
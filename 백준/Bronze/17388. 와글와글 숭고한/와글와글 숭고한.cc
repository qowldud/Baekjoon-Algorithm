#include <iostream>
using namespace std;

int main(void){
    int array[3], min = 101,a;
    for(int i=0;i<3;i++){
        cin>>array[i];
        if(min>array[i]){
            min = array[i];
            a = i;
        }
    }
    int sum = array[0]+array[1]+array[2];
    if(sum>=100)cout<<"OK"<<'\n';
    else{
        if(a==0)cout<<"Soongsil"<<'\n';
        else if(a==1)cout<<"Korea"<<'\n';
        else if(a==2)cout<<"Hanyang"<<'\n';
    }
}
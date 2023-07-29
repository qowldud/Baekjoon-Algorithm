#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int array[3];
    for(int i=0;i<3;i++){
        cin>>array[i];
    }
    sort(array,array+3);
    if((array[2]-array[1])<(array[1]-array[0])){
        int a = array[2]-array[1];
        cout<<array[0]+a<<'\n';
    }
    else if((array[2]-array[1])==(array[1]-array[0])){
        int a = array[2]-array[1];
        cout<<array[2]+a<<'\n';

    }
    else{
        int a = array[1]-array[0];
        cout<<array[1]+a<<'\n';
    }
}
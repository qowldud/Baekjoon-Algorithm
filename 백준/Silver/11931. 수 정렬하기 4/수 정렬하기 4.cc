#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int num;
    cin>>num;
    int Array[num];
    for(int i=0;i<num;i++){
        cin>>Array[i];
    }
    sort(Array,Array+num,greater<int>());
    for(int i=0;i<num;i++){
        cout<<Array[i]<<'\n';
    }
}
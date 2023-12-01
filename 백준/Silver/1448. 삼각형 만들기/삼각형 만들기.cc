#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int num;
    cin>>num;
    int array[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    
    sort(array,array+num,greater<>());

    for(int i=0;i<num-2;i++){
        if(array[i]<array[i+1]+array[i+2]){
            cout<<array[i]+array[i+1]+array[i+2]<<'\n';
            return 0;
        }
    }
    cout<<-1<<'\n';
}
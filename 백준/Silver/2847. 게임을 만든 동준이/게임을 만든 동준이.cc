#include <iostream>
using namespace std;

int main(void){
    int num, count = 0;
    cin>>num;
    int array[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    for(int i=num-1;i>0;i--){
        while(array[i]<=array[i-1]){
            array[i-1]--;
            count++;
        }
    }
    cout<<count<<'\n';
}
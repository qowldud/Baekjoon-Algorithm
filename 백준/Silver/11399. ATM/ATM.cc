#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int num, time=0, count = 0;
    cin>>num;
    int array[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    sort(array,array+num);
    for(int i=num;i>0;i--){
        time += array[count]*i;
        count++;
    }
    cout<<time<<'\n';
}
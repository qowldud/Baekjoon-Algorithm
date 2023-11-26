#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int num, day = 1;
    cin>>num;
    int array[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    sort(array,array+num,greater<>());
    day += num;
    int k = num-1;
    for(int i=0;i<num;i++){
        array[i]-=k;
        k--;
        }
    sort(array,array+num,greater<>());
    day += array[0];
    cout<<day<<'\n';
}
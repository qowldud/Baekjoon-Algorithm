#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int num;
    cin>>num;
    int count = num;
    int array[num];
    int array1[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    sort(array,array+num);
    for(int i=0;i<num;i++){
        array1[i] = array[i]*count;
        count--;
    }
    sort(array1,array1+num,greater<>());
    cout<<array1[0]<<'\n';
}
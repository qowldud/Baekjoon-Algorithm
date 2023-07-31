#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int array[5];
    int sum = 0;
    for(int i=0;i<5;i++){
        cin>>array[i];
        sum += array[i];
    }
    sort(array,array+5);
    cout<<sum/5<<'\n'<<array[2];
}
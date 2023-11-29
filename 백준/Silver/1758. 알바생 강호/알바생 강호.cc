#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    long long num, sum = 0,count = 1;
    cin>>num;
    long long array[num];

    for(int i=0;i<num;i++){
        cin>>array[i];
    }

    sort(array,array+num,greater<>());

    for(int i=0;i<num;i++){
        if(array[i]-(count-1)>=0){
        sum += array[i]-(count-1);
        count++;
        }
        else break;
    }
    cout<<sum<<'\n';
}
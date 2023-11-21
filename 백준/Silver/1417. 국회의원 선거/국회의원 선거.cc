#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int num,count = 0;
    cin>>num;
    int array[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    if(num==1){
        cout<<count<<'\n';
        return 0;
    }
    while(1){
    sort(array+1,array+num,greater<>());
    if(array[0]<=array[1]){
    array[0]+=1;
    array[1]-=1;
    count += 1;
    }
    else break;
    }
    cout<<count<<'\n';

}
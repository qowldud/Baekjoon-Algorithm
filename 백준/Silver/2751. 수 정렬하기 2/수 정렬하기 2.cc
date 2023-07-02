#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num;
    cin>>num;
    int array[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    sort(array,array+num);
    for(int i=0;i<num;i++){
        cout<<array[i]<<"\n";
    }
    return 0;
}
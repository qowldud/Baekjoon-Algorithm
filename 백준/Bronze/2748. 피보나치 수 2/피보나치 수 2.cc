#include <iostream>
using namespace std;

int main(void){
    int n;
    cin>>n;
    long long array[n+1];
    array[0] = 0;
    array[1] = 1;
    for(int i=2;i<=n;i++){
        array[i] = array[i-1]+array[i-2];
    }
    cout<<array[n]<<'\n';
    }
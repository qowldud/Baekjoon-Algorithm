#include <iostream>

using namespace std;

int main(void){
    int n;
    cin>>n;
    int array[46];
    for(int i=0;i<n+1;i++){
        if(i==0)array[0] = 0;
        else if(i==1)array[1] = 1;
        else{
            array[i] = array[i-2] + array[i-1];
        }
    }
    cout<<array[n]<<'\n';
}
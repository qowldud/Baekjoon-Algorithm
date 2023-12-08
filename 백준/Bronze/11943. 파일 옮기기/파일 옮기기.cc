#include <iostream>

using namespace std;

int main(void){
    int array[4];
    for(int i=0;i<4;i++){
        cin>>array[i];
    }
    if(array[0]+array[3]<= array[1]+array[2])cout<<array[0]+array[3];
    else cout<<array[1]+array[2];
}
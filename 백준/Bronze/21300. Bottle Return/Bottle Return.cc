#include <iostream>
using namespace std;

int main(void){
    int array[6];
    int sum = 0;
    for(int i=0;i<6;i++){
        cin>>array[i];
        sum+=array[i];
    }
    cout<<sum*5<<'\n';
}
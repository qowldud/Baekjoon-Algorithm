#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int num, p;
    int sum = 0;
    cin>>num;
    int array[num];
    cin.ignore();
    for(int i=0;i<num;i++){
        array[i]=cin.get();
        array[i]-=96;
        p = pow(31,i);
        array[i]*=p;
    }
    for(int i=0;i<num;i++){
        sum+=array[i];
    }
    cout<<sum<<'\n';
    return 0;

}
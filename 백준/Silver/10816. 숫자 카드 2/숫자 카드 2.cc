#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int num1, num2, a, low, up;
    cin>>num1;
    int array1[num1];
    for(int i=0;i<num1;i++){
        cin>>array1[i];
    }
    sort(array1,array1+num1);
    cin>>num2;
    int array2[num2];
    for(int i=0;i<num2;i++){
        cin>>array2[i];
    }
    for(int i=0;i<num2;i++){
        a = array2[i];
        low = lower_bound(array1,array1+num1,a)-array1;
        up = upper_bound(array1,array1+num1,a)-array1;
        array2[i] = up-low;
    }
    for(int i=0;i<num2;i++){
        cout<<array2[i]<<" ";
    }
}
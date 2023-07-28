#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int num1,num2;
        cin>>num1;
        int array[num1];
        for(int j=0;j<num1;j++){
        cin>>array[j];
        }
        sort(array,array+num1);
        cin>>num2;
        for(int k=0;k<num2;k++){
            int a;
            cin>>a;
            cout<<binary_search(array,array+num1,a)<<'\n';
        }
    }
}
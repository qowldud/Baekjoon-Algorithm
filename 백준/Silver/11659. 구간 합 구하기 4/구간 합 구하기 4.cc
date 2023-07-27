#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num1,num2;
    cin>>num1>>num2;
    int array[num1];
    int array1[num1];
    for(int i=0;i<num1;i++){
        cin>>array[i];
        if(i==0)array1[i]=array[i];
        else array1[i]=array[i]+array1[i-1];
    }
    for(int i=0;i<num2;i++){
        int a,b;
        cin>>a>>b;
        if(a==1)cout<<array1[b-1]<<'\n';
        else cout<<array1[b-1]-array1[a-2]<<'\n';
    }
}
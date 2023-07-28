#include <iostream>
#include <map>
using namespace std;

int main(void){
    int num1,num2;
    map<int, bool>m1;
    cin>>num1;
    for(int i=0;i<num1;i++){
        int a;
        cin>>a;
        m1.insert({a,false});
    }
    cin>>num2;
    int array[num2];
    for(int i=0;i<num2;i++){
        int b;
        cin>>b;
        if(m1.find(b)!=m1.end()){
            array[i]=1;
        }
        else array[i] = 0;
    }
    for(int i=0;i<num2;i++){
        cout<<array[i]<<" ";
    }

}
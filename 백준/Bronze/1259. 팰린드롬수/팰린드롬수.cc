#include <iostream>
#include <string>
using namespace std;

int main(void){
    while(true){
        string num;
        cin>>num;
        int count = num.length();
        int num1 = stoi(num);
        if(num1==0)break;
        int array[count];
        for(int i=0;i<count;i++){
            array[i]=num1%10;
            num1/=10;
        }
        bool Bool = true;
        for(int i=0;i<count/2;i++){
            if(array[i]!=array[count-i-1])Bool = false;
        }
        if(Bool)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
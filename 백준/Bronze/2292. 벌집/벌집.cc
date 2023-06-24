#include <iostream>
using namespace std;

int main(void){
    int num;
    int count=1;
    cin>>num;
    for(int i=1;;i++){
        if(num==1){
            cout<<num<<endl;
            break;
        }
        else{
            count+=6*i;
            if(count-6*i<num&&num<=count){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
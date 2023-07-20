#include <iostream>
#include <deque>
using namespace std;

int main(void){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int a;
        cin>>a;
        string str;
        cin>>str;
        for(int j=0;j<str.length();j++){
            if(!(j+1==a))cout<<str.at(j);
        }        
        cout<<'\n';
    }
}
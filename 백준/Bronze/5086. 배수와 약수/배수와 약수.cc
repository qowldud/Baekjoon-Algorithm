#include <iostream>

using namespace std;

int main(void){
    while(1){
        int a,b;
        cin>>a>>b;
        if(a==0&&b==0)exit(0);
        else{
            if((a>=b)&&(a%b==0))cout<<"multiple"<<'\n';
            else if((a<b)&&(b%a==0))cout<<"factor"<<'\n';
            else cout<<"neither"<<'\n';
        }
    }
}
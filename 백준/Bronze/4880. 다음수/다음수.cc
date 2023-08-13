#include <iostream>
using namespace std;

int main(void){
    int a,b,c;
    while(1){
    cin>>a>>b>>c;
    if(a==0&&b==0&&c==0)exit(0);
    else if((b-a)==(c-b)){
        cout<<"AP"<<" "<<c+(b-a)<<'\n';
    }
    else if((b/a)==(c/b)){
        cout<<"GP"<<" "<<c*(b/a)<<'\n';
    }
    }
}
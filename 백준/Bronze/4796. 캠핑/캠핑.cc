#include <iostream>
using namespace std;

int main(void){
    int count = 1;
    while(1){
        int a,b,c,num;
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0)break;
        else{
            num = (c/b)*a;
            int date = c%b;
            if(a>date)num+=date;
            else{
                num+=a;
            }
        }
        cout<<"Case "<<count<<": "<<num<<'\n';
        count++;
    }
}
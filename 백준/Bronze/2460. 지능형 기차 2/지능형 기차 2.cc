#include <iostream>
using namespace std;

int main(void){
    int a,b,count = 0;
    int max = 0;
    for(int i=0;i<10;i++){
        cin>>a>>b;
        count += b;
        count -= a;
        if(max<count)max = count;
    }
    cout<<max<<'\n';
}
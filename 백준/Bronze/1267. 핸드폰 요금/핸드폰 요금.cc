#include <iostream>
using namespace std;

int main(void){
    int num;
    int y=0,m=0;
    cin>>num;
    int array[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    for(int i=0;i<num;i++){
        y+=(array[i]/30+1)*10;
    }
    for(int i=0;i<num;i++){
        m+=(array[i]/60+1)*15;
    }
    if(y<m)cout<<"Y "<<y<<endl;
    else if(y==m)cout<<"Y M "<<y<<endl;
    else cout<<"M "<<m<<endl;
    return 0;
}
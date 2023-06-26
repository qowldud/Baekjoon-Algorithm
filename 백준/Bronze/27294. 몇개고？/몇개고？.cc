#include <iostream>
using namespace std;

int main(void){
    int time, drink;
    cin>>time>>drink;
    if(12<=time&&time<=16&&drink==0)cout<<320<<endl;
    else cout<<280<<endl;
    return 0;
}
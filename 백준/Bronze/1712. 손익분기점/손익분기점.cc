#include <iostream>

using namespace std;

int main(void){
    int A,B,C;
    cin>>A>>B>>C;
    int plus = C-B;
    if(B>=C) cout<<-1<<'\n';
    else cout<<A/plus + 1<<'\n';
}
#include <iostream>
using namespace std;

int main(void){
    int L,A,B,C,D;
    int kor = 0, math = 0;
    cin>>L>>A>>B>>C>>D;
    if(A%C==0)kor=A/C;
    else kor=A/C+1;
    if(B%D==0)math=B/D;
    else math=B/D+1;
    if(kor>math)cout<<L-kor<<endl;
    else cout<<L-math<<endl;
    return 0;
}
#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num,count=1;
    cin>>num;
    while(num--){
        long long P,Q;
        cin>>P>>Q;
        long long v[P] = {0,};
        for(int i=0;i<P;i++){
            if(i==0||i==1)v[i] = 1;
            else{
                v[i] = (v[i-2] + v[i-1])%Q;
            }
        }
        cout<<"Case #"<<count<<": "<<v[P-1]%Q<<'\n';
        count++;
    }
}
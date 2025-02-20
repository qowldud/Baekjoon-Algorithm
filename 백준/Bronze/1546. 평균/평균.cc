#include <iostream>

using namespace std;

int main(void){
    int N;
    int sum = 0, max = 0;
    cin>>N;
    
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        if(max < a)max = a;
        sum+=a;
    }
    
    cout<<sum*100.0/max/N;
}
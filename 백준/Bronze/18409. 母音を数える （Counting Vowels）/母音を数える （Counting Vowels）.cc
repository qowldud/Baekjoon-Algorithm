#include <iostream>

using namespace std;

int main(void){
    int n, count = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o'){
            count++;
        }
    }
    
    cout<<count;
}
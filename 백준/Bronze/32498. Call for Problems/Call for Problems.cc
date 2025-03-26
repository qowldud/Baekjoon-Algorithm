#include <iostream>

using namespace std;

int main(void){
    int n, count = 0;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%2 == 1){
          count++; 
        }
    }
    cout<<count;
}
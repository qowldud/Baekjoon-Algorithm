#include <iostream>

using namespace std;

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int num;
    cin>>num;
    int array[num];
    
    for(int i = 0; i < num; i++){
        cin>>array[i];
    }

    for(int i = 1; i < num; i++){
        for(int j = array[i]; j > 0; j--){
            if(array[0]%j==0 && array[i]%j==0){
                cout<<array[0]/j<<"/"<<array[i]/j<<'\n';
                break;
            }
        }
    }
}
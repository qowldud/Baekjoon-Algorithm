#include <iostream>
using namespace std;

int main(void){
    int num;
    int now = 0, score = 0;
    
    cin>>num;
    int array[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    for(int i=0;i<num;i++){
        if(array[i]==0){
            now = 0;
        }
        else if(array[i]==1){
            now+=1;
            score += now;
        }
    }
    cout<<score<<'\n';
}
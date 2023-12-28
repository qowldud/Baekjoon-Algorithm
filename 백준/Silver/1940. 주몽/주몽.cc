#include <iostream>

using namespace std;

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num, M, count = 0;
    cin>>num>>M;
    int array[num];

    for(int i = 0; i< num; i++){
        cin>>array[i];
    }

    for(int i = 0; i < num; i++){
        for(int j = i+1; j < num; j++){
            if(M == array[i] + array[j])count++;
        }
    }
    cout<<count;
}
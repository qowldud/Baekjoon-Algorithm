#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num;
    cin>>num;
    int array[num];

    for(int i=0; i < num;i++){
        cin>>array[i];
    }

    sort(array,array+num);

    for(int i=0;i<num;i++){
        cout<<array[i]<<'\n';
    }
}
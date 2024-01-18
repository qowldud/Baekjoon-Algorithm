#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int num, count = 0, x;
    cin>>num;

    int array[num];

    for(int i = 0; i < num; i++){
        cin>>array[i];
    }

    cin>>x;
    
    sort(array,array+num);

    for(int i = 0;i < num; i++){
       bool BOOL =  binary_search(array+i+1,array+num,x-array[i]);
       if(BOOL) count++;
    }
    
    cout<<count<<'\n';
    }
#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int x,y,w,h;
    cin>>x>>y>>w>>h;
    
    int array[4] = {w-x,x,h-y,y};
    
    sort(array,array+4);
    
    cout<<array[0]<<'\n';
    }
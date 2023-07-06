#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main(void){
    string num;
    cin>>num;
    int a = num.length();
    int array[a];
    for(int i=0;i<a;i++){
        array[i]=stoi(num.substr(i,1));
    }
    sort(array,array+a,compare);
    for(int i=0;i<a;i++){
        cout<<array[i];
    }
    cout<<'\n';
    return 0;
}

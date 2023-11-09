#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int c,num;
    int array[21] ={0,};
    cin>>c;
    for(int i=0;i<c;i++){
    string word;
    cin>>word;
    if(word.compare("add")==0){
        cin>>num;
        array[num] = 1;
    }
    else if(word.compare("remove")==0){
        cin>>num;
        array[num] = 0;
    }
    else if(word.compare("check")==0){
        cin>>num;
        cout<<array[num]<<'\n';
    }
    else if(word.compare("toggle")==0){
        cin>>num;
        if(array[num]==1)array[num]=0;
        else array[num] = 1;
    }
    else if(word.compare("all")==0){
        for(int k=1;k<=20;k++){
            array[k] = 1;
        }
    }
    else if(word.compare("empty")==0){
        for(int k=1;k<20;k++){
            array[k] = 0;
        }
    }
    
    }
}
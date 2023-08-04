#include <iostream>
#include <unordered_map>
using namespace std;

int main(void){
    int num;
    char word;
    unordered_map<string,int> s;
    cin>>num>>word;
    string name;
    for(int i=0;i<num;i++){
        cin>>name;
        s.insert({name,0});
    }
    if(word == 'Y'){
        cout<<s.size()<<'\n';
    }
    else if(word == 'F'){
        cout<<s.size()/2<<'\n';
    }
    else if(word == 'O'){
        cout<<s.size()/3<<'\n';
    }
}
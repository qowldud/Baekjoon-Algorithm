#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b){
    if(a.length()==b.length())return a<b;
    else return a.length()<b.length();
}
int main(void){
    int num;
    string word;
    cin>>num;
    vector<string> v;
    for(int i=0;i<num;i++){
        cin>>word;
        v.push_back(word);
    }
    sort(v.begin(),v.end(),compare);
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<'\n';
    }
    return 0;
}
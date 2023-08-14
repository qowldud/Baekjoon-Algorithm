#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void){
    char c;
    string s;
    int num, real, count = 0;
    cin>>real;
    vector<int> v;
    for(int i=1;i<=real;i++){
        v.clear();
        s = to_string(i);
        if(s.length()<=2)count +=1;
        else{
            for(int j=0;j<s.length();j++){
                num = s[j]-'0';
                v.push_back(num);
            }
            if((v[2]-v[1])==(v[1]-v[0]))count+=1;   
        }
    }
    cout<<count<<'\n';
}
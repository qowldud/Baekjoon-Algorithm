#include <iostream>
using namespace std;

int main(void){
    string s1,s2;
    int a,b,count = 0,real = 0;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<s1.length();i++){
        a = i;
        count = 0;
        for(int j=0;j<s2.length();j++){
            if(s1[a]==s2[j]){
                count += 1;
                a++;
            }
            else break;
        }
        if(count == s2.length()){
            real++;
            i = i+s2.length()-1;
        }
    }
    cout<<real<<'\n';
    }
#include <iostream>
#include <vector>
using namespace std;

int main(void){
    string s1,s2;
    vector<long long> v1,v2;
    long long sum = 0;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        int a = s1[i]-'0';
        v1.push_back(a);
    }
    for(int i=0;i<s2.length();i++){
        int a = s2[i]-'0';
        v2.push_back(a);
    }
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            sum += v1[i]*v2[j];
        }
    }
    cout<<sum<<'\n';
}

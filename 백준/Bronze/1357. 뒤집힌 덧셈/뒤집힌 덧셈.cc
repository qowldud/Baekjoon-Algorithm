#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void){
    string a, b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int a1,b1;
    a1 = stoi(a);
    b1 = stoi(b);
    int sum = a1 + b1;
    string str;
    str = to_string(sum);
    reverse(str.begin(),str.end());
    int num = stoi(str);
    cout<<num<<'\n';
}
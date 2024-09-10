#include <iostream>
#include <string>

using namespace std;

int main(void){
    int a, b, c;
    string s1, s2, s3;
    cin>>a>>b>>c;
    cout<<a+b-c<<'\n';
    s1 = to_string(a);
    s2 = to_string(b);
    s3 = s1 + s2;
    int k = stoi(s3);
    cout<<k-c;
    
}
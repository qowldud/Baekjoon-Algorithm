#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main(void){
    int num;
    cin>>num;
    string s1, s2;
    deque<char> de1, de2;
    for(int i=0;i<num;i++){
        de1.clear();
        de2.clear();
        cin>>s1;
        s2 = s1;
        reverse(s1.begin(),s1.end());
        int ationum =  atoi(s1.c_str());
        int reverse = atoi(s2.c_str());
        int sum = ationum + reverse;
        string str = to_string(sum);
        for(int i=0;i<str.length();i++){
            de1.push_back(str[i]);
            de2.push_front(str[i]);
        }
        if(de1 == de2)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}
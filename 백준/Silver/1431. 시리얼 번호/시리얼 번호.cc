#include <iostream>
#include <algorithm>

using namespace std;

bool compare(string& s1, string& s2){
    int count1 = 0, count2 = 0;

    for(int i = 0; i < s1.length(); i++){
        if(s1[i]>=48 && s1[i]<=57){
            int a = s1[i] - '0';
            count1 += a;
        }
    }
    for(int i = 0; i < s2.length(); i++){
        if(s2[i]>=48 && s2[i]<=57){
            int a = s2[i] - '0';
            count2 += a;
        }
    }


    if(s1.length() == s2.length()){
        if(count1 == count2){
            return s1 < s2;
        } else return count1 < count2;
    } else {
        return s1.length() < s2.length();
    }
}

int main(void){
    int num;
    cin>>num;

    string s[num];
    for(int i = 0; i < num; i++){
        cin>>s[i];
    }

    sort(s,s+num,compare);

    for(int i = 0; i < num; i++){
        cout<<s[i]<<'\n';
    }
    
}
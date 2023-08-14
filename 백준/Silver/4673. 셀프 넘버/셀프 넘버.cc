#include <iostream>
#include <vector>
using namespace std;

int main(void){
    string s;
    vector<int> v;
    int num, count = 0;
    for(int i=1;i<10000;i++){
        count = 0;
        for(int j=1;j<i;j++){
        int sum = j;
        s = to_string(j);
        for(int k=0;k<s.length();k++){
            num = s[k]-'0';
            sum += num;
        }
        if(sum == i)count+=1;
        }
        if(count == 0)cout<<i<<'\n';
    }
}
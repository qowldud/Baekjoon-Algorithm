#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    string s;
    int count = 0,sum = 0;
    cin>>s;
    int num = s.length();
    int array[num];
    for(int i=0;i<num;i++){
        if(s[i]=='0')break;
        else count++;
    }
    if(count == num){
        cout<<-1<<'\n';
        return 0;
    }
    for(int i=0;i<num;i++){
        sum += s[i]-'0';
        array[i] = s[i]-'0';
    }
    if(sum%3==0){
        sort(array,array+num,greater<>());
        for(int i=0;i<num;i++){
            cout<<array[i];
        }
    }
    else{
        cout<<-1<<'\n';
        return 0;
    }

}
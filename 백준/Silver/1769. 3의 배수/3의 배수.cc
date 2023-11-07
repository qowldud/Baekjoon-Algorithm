#include <iostream>
#include <string>
using namespace std;

int main(void){
    string num;
    long long sum,count = 0;
    cin>>num;
    while(1){
        if(num.length()==1){
            sum = stoi(num);
            break;
        }
        sum = 0;
        for(int i=0;i<num.length();i++){
            sum+=num[i]-'0';
        }
        count+=1;
        if(0<=sum&&sum<10)break;
        else num = to_string(sum);
    }
    if(sum!=0&&sum%3==0){
        cout<<count<<'\n'<<"YES";
    }
    else{
        cout<<count<<'\n'<<"NO";
    }
}
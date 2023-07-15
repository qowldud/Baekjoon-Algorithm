#include <iostream>
using namespace std;

int main(void){
    int num, count;
    string word;
    cin>>num;

    for(int i=0;i<num;i++){
        count=0;
        cin>>word;
        for(int i=0;i<word.length();i++){
            if(word.at(i)=='('){
                count+=1;
            }
            else if(word.at(i)==')'){
                count-=1;
                if(count<0){
                    cout<<"NO"<<'\n';
                    break;
                }
            }
            if(i==word.length()-1&&count==0)cout<<"YES"<<'\n';
            else if(i==word.length()-1&&count!=0)cout<<"NO"<<'\n';
        }
    }
}
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    string s;
    int a=0,b=0;
    int array[4] = {0,};
    cin>>s;
    string s1 = s,s2 = s,s3 = s;
    for(int i=0;i<s.length();i++){
        if(s[i]-'0'==1)a+=1;
        else b+=1;
        }
        if(a==s.length()||b==s.length()){
            cout<<0<<'\n';
            return 0;
        }
        
    for(int i=0;i<s.length();i++){
        if(s[i]-'0'==1){
            while(s[i]-'0'==1){
                s[i] = '0';
                i++;
            }
            array[0]++;
        }
    }
    for(int i=0;i<s.length();i++){
        if(s2[i]-'0'==0){
            while(s2[i]-'0'==0){
                s2[i] = '1';
                i++;
            }
            array[1]++;
        }
    }
    for(int i=0;i<s1.length();i++){
        array[2]++;
        if(s1[i]-'0'==0)s1[i] = '1';
        else s1[i] = '0';
        if(s1[i]-'0'== 0){
            while(s1[i]-'0'==0){
                s1[i] = '1';
                i++;
            }
            array[2]++;
        }
            }
    for(int i=0;i<s1.length();i++){
        array[3]++;
        if(s3[i]-'0'==0)s3[i] = '1';
        else s3[i] = '0';
        if(s3[i]-'0'== 1){
            while(s1[i]-'0'==0){
                s1[i] = '0';
                i++;
            }
        array[3]++;
        }
            }
            sort(array,array+4);
            cout<<array[0]<<'\n';
}
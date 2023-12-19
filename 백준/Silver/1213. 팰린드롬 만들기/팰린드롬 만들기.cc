#include <iostream>
#include <map>

using namespace std;

int main(void){
    string s;
    int count = 0;
    int k = 0;
    map<char,int> m;
    cin>>s;
    char array[s.length()];
    for(int i=0;i<s.length();i++){
        if(m.find(s[i])==m.end()){
            m.insert({s[i],1});
        }
        else m[s[i]]++;
    }
    for(auto iter = m.begin();iter!=m.end();iter++){
        if((iter->second)%2!=0)count++;
    }
    if(count>1){
        cout<<"I'm Sorry Hansoo"<<'\n';
        return 0;
    }
    else{
        if(s.length()%2==0){
            for(auto iter = m.begin();iter!=m.end();iter++){
                for(int i=0;i<(iter->second)/2;i++){
                    array[k] = iter->first;
                    array[s.length()-k-1] = iter->first;
                    k++;
                }
            }
        }
        else {
            for(auto iter = m.begin();iter!=m.end();iter++){
                if((iter->second)%2!=0){
                    array[s.length()/2] = iter->first;
                    (iter->second)-=1;
                    for(int i=0;i<(iter->second)/2;i++){
                        array[k] = iter->first;
                        array[s.length()-k-1] = iter->first;
                        k++;
                }
                }
                else{
                    for(int i=0;i<(iter->second)/2;i++){
                        array[k] = iter->first;
                        array[s.length()-k-1] = iter->first;
                        k++;
                }
            }
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<array[i];
    }

    }
    
}
#include <iostream>
#include <map>
using namespace std;

int main(void){
    int num;
    int count = 0;
    map <string, int> m;
    cin>>num;
    for(int i=0;i<num;i++){
        string s;
        cin>>s;
        if(s.compare("ENTER")==0)m.clear();
        else{
            if(!(m.find(s)!=m.end())){
                count += 1;
                m.insert({s,0});
            }
        }
    }
    cout<<count<<'\n';
}
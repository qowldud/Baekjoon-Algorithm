#include <iostream>

using namespace std;

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    int count = 0;
    int current = 0;
    bool BOOL = true;

    for(int i=0;i<s.length();i++){
        if(s[i]=='X'){
            count++;
        }
        else{

            if(count%2!=0){
                cout<<-1<<'\n';
                return 0;
            }

            if(s[i]=='.'){
                BOOL = false;
                int k = count/4;
                count%=4;
                for(int i=0;i<k*4;i++){
                    s[current] = 'A';
                    current++;
                }
                for(int i=0;i<count;i++){
                    s[current] = 'B';
                    current++;
                }
                current++;
                count = 0;
            }
            BOOL = true;
        }
        
    }
    if(BOOL){
        if(count%2!=0){
                cout<<-1<<'\n';
                return 0;
            }
            int k = count/4;
            count%=4;
                for(int i=0;i<k*4;i++){
                    s[current] = 'A';
                    current++;
                }
                for(int i=0;i<count;i++){
                    s[current] = 'B';
                    current++;
                }
        }
    cout<<s<<'\n';
}
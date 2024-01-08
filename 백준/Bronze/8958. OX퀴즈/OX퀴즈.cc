#include <iostream>

using namespace std;

int main(void){
    int num;
    cin>>num;
    
    for(int i = 0; i < num; i++){
        string s;
        int score = 0, count = 0;
        cin>>s;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == 'O') {
                count++;
                score += count;
            } else {
                count = 0;
            }
        }
        cout<<score<<'\n';
    }
}
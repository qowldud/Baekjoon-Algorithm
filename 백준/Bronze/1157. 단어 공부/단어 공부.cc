#include <iostream>

using namespace std;

int main(void){
    string s;
    int array[26] = {0,};
    int count = 1, num = 0;
    cin>>s;
    for(int i = 0; i < s.length(); i++){
        if(97<=s[i]&&s[i]<=122) s[i] = s[i] - 32;
        array[s[i]-65]+=1;
    }
    int max = array[0];
    for(int i = 1; i <= 25; i++){
        if(max < array[i]){
            count = 1;
            num = i;
            max = array[i];
        } else if(max <= array[i]){
            count += 1;
        }
    }
    if(count>=2) cout<<"?"<<'\n';
    else {
        char c = num+65;
        cout<<c<<'\n';
    }

}
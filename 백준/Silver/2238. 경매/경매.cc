#include <iostream>
#include <vector>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string> p1;
    vector<int> p2;
    int num1, num2;
    cin>>num1>>num2;
    int array[num1+1] = {0};
    string s;
    int a;
    for(int i=0;i<num2;i++){
        cin>>s>>a;
        p1.push_back(s);
        p2.push_back(a);
        array[a]+=1;
    }
    int min = 0, count;
    for(int i=0;i<num1+1;i++){
        if(array[i]!=0){
            if(min == 0){
                min = array[i];
                count = i;
            }
            else{
                if(min>array[i]){
                    min = array[i];
                    count = i;
                }
            }
        }
    }
    for(int i=0;i<num2;i++){
        if(p2[i]==count){
            cout<<p1[i]<<" "<<p2[i]<<'\n';
            exit(0);
        }
    }
}
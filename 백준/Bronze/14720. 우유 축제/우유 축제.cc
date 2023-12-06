#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int num;
    cin>>num;
    vector <int> v;
    int count = 0;
    for(int i=0;i<num;i++){
        int a;
        cin>>a;
        if(v.empty()){
            if(a==0){
                v.push_back(a);
                count++;
            }
        }
        else{
            if(count%3==1){
                if(a==1)count++;
            }
            else if(count%3==2){
                if(a==2)count++;
            }
            else {
                if(a==0)count++;
            }
        }
    }
    cout<<count<<'\n';

}
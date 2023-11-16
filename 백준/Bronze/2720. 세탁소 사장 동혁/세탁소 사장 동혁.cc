#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int array[4] = {25,10,5,1};
    int count,num;
    vector<int> v;
    cin>>count;
    for(int i=0;i<count;i++){
        cin>>num;
        for(int i=0;i<4;i++){
            if(num/array[i]!=0){
                v.push_back(num/array[i]);
                num%=array[i];
            }
            else v.push_back(0);
        }
        for(int i=0;i<4;i++){
            cout<<v[i]<<" ";
        }
        cout<<'\n';
        v.clear();
    }
}
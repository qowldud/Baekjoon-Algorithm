#include <iostream>
using namespace std;

int main(void){
    int num;
    int count=0;
    cin>>num;
    int array[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
        bool Bool = true;
        if(array[i]==1)Bool=false;
        else if(array[i]==2)count+=1;
        else{
        for(int j=2;j<array[i];j++){
            if(array[i]%j==0){
                Bool=false;
                break;
            }
        }
        if(Bool)count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}
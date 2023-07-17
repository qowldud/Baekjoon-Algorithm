#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int array[10000]={0,};
    int num, count;
    cin>>num;
    for(int i=0;i<num;i++){
        int a;
        cin>>a;
        array[a-1]++;
    }
    for(int i=0;i<10000;i++){
        if(array[i]!=0){
            for(int j=0;j<array[i];j++){
                cout<<i+1<<'\n';
                count+=1;
            }
            if(count==num)break;
        }
    }
}

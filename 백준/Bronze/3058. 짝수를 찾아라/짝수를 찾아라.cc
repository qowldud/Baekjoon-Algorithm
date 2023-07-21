#include <iostream>
using namespace std;

int main(void){
    int num,sum,min;
    cin>>num;
    for(int i=0;i<num;i++){
        min = 100;
        sum = 0;
        int array[7];
        for(int j=0;j<7;j++){
            cin>>array[j];
            if(array[j]%2==0){
                sum+=array[j];
                if(min>array[j])min = array[j];
            }
        }
        cout<<sum<<" "<<min<<'\n';

    }
}
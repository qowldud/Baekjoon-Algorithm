#include <iostream>
using namespace std;

int main(void){
    int num[7];
    int sum = 0;
    int min;
    for(int i=0;i<7;i++){
        cin>>num[i];
    }
    for(int i=0;i<7;i++){
        if(sum == 0){
            if(num[i]%2!=0){
                min = num[i];
                sum +=num[i];
            }
        }
        else{
            if(num[i]%2!=0){
                if(min>num[i])min = num[i];
                sum += num[i];
            }
        }
    }
    if(sum == 0)cout<<-1<<endl;
    else{
        cout<<sum<<endl;
        cout<<min<<endl;
    }
    return 0;
}
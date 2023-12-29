#include <iostream>

using namespace std;

int main(void){
    int  num;
    cin>>num;

    if(num == 0) cout<<0<<'\n'<<0;
    else if(num == 1)cout<<1<<'\n'<<1;
    else if(num == -1)cout<<1<<'\n'<<1;
    else if(num > 0){
        int array[num + 1];
        for(int i = 0;i <= num; i++){
            if(i==0)array[0] = 0;
            else if(i == 1)array[1] = 1;
            else {
                long long k = array[i - 2] + array[i - 1];
                array[i] = k%1000000000;
            }
        }
        cout<<1<<'\n'<<array[num];
    }
    else if(num < 0){
        num = -(num);
        long long array[num + 1];
        for(int i = 0; i <= num; i++){
            if(i == 0)array[0] = 0;
            else if(i == 1)array[1] = 1;
            else {
                long long k = array[i - 2] + array[i - 1];
                array[i] = k%1000000000;
            }
        }
        if(num%2==0)cout<<-1<<'\n'<<array[num];
        else cout<<1<<'\n'<<array[num];
    }
}
#include <iostream>

using namespace std;

int main(void){
    int year = 2024;
    int month = 1;
    int a;
    cin>>a;
    month += a*7;
    if(month%12 != 0){
        year = year + month/12;
        month = month%12;
    }else{
        year = year + month/12 - 1;
        month = 12;
    }
    cout<<year<<" "<<month;
    
}
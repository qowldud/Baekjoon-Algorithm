#include <iostream>
using namespace std;

int main(void){
    int price;
    int array[9];
    cin>>price;
    for(int i=0;i<9;i++){
        cin>>array[i];
        price-=array[i];
    }
    cout<<price<<'\n';
}
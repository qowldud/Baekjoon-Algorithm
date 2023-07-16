#include <iostream>
using namespace std;

int main(void){
    int array[9][9];
    int max = 0;
    int x,y;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>array[i][j];
            if(max<=array[i][j]){
                max = array[i][j];
                x = i+1;
                y = j+1;
            }
        }
    }
    cout<<max<<'\n'<<x<<" "<<y<<'\n';
}
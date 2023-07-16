#include <iostream>
using namespace std;

int main(void){
        int sum;
        int max, people=1;
    int array[5][4];
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<5;i++){
        sum = 0;
        for(int j=0;j<4;j++){
            sum+=array[i][j];
        }
        if(i==0)max = sum;
        else{
            if(max<sum){
                max = sum;
                people = i+1;
            }
        }

    }
    cout<<people<<" "<<max<<'\n';

}
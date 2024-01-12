#include <iostream>

using namespace std;

int main(void){
    int num;
    cin>>num;
    int array[num][5];

    for(int i = 0 ;i < num;i++){
        for(int j = 0; j < 5; j++){
            cin>>array[i][j];
        }
    }
    
    int count,max = 0;

    for(int i = 0; i < num; i++){
        for(int j = 0; j < 3; j++){
            for(int k = j+1; k < 4; k++){
                for(int l = k+1;l < 5; l++){
                    int sum = (array[i][j] + array[i][k] + array[i][l])%10;
                    if(sum >= max){
                        max = sum;
                        count = i+1;
                    }
                }
            }
        }
    }
    cout<<count<<'\n';
}
#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    bool array[101][101] = {false,};
    int count = 0;
    
    for(int i=0;i<4;i++){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        
        for(int x = x1; x < x2;x++){
            for(int y = y1; y < y2; y++){
                array[x][y] = true;
            }
        }
    }
    
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            if(array[i][j])count++;
        }
    }
    
    cout<<count;
}
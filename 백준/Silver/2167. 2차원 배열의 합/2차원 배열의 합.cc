#include <iostream>
using namespace std;

int main(void){
    int N,M,num;
    int i,j,x,y,sum;
    cin>>N>>M;
    int array[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>array[i][j];
        }
    }
    cin>>num;
    for(int k=0;k<num;k++){
        sum = 0;
        cin>>i>>j>>x>>y;
        for(int g=i;g<=x;g++){
            for(int h=j;h<=y;h++){
                sum+=array[g-1][h-1];
            }
        }
        cout<<sum<<'\n';
    }
}
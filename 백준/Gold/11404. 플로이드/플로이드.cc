#include <iostream>
using namespace std;

#define INF 9900001

int main(void){
    int n,m;
    cin>>n>>m;
    int distance[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            distance[i][j] = INF;
        }
    }
    int a,b,c;
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        if(distance[a][b]==INF){
        distance[a][b] = c;
        }
        else{
            if(c<distance[a][b])distance[a][b] = c;
        }
    }
    for(int i = 1;i<=n;i++){
        distance[i][i] = 0;
    }
    for(int k = 1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int num = distance[i][k] + distance[k][j];
                if(distance[i][j]>num)distance[i][j] = num;
            }
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(distance[i][j]>=INF)distance[i][j] = 0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)cout<<distance[i][j]<<" ";
        cout<<'\n';
    }


}
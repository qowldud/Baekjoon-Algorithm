// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N,M;
    cin>>N>>M;
    int s[N+1][N+1] = {};
    
    for(int i = 1;i<=N;i++){
        for(int j=1;j<=N;j++){
            int a;
            cin>>a;
            s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + a;
        }
    }
    
    
    for(int i=0;i<M;i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        
        cout<<s[x2][y2] - s[x1-1][y2] - s[x2][y1-1] + s[x1-1][y1-1]<<'\n';
    }
}
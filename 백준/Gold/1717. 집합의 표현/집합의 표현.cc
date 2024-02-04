#include <iostream>

using  namespace std;

const int MAXN = 1000000;
int parent[MAXN+1];

int Find(int x);
void Union(int x, int y);

int main(void){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

    int n,m;
    cin>>n>>m;

    for(int i=0; i<=n; i++){
        parent[i] = i;
    }
    
    for(int i=0;i<m;i++){
        int num,a,b;
        cin>>num>>a>>b;

        if(num==0){
            Union(a,b);
        }
        else if(num==1){
            if(Find(a)==Find(b))cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
}

int Find(int x){
    if(x == parent[x])return x;
    return parent[x] = Find(parent[x]);
}

void Union(int x, int y){
    int px = Find(x);
    int py = Find(y);
    if(px != py){
        parent[py] = px;
    }
}

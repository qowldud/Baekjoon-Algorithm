#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int num;
    cin>>num;

    for(int i = 0; i < num; i++){
        int N, M, count = 0;
        vector<int> v;
        queue<int> v1,vnum;
        bool BOOL = false;
        cin>>N>>M;

        for(int j = 0 ; j < N; j++){
            int a;
            cin>>a;
            v.push_back(a);
            v1.push(a);
            vnum.push(j);
        }

        sort(v.begin(),v.end(),greater<>());
        
        for(int j = 0; j < N; j++){
            for(int k = 0; k < v1.size();k++){
                if(v[j]==v1.front()){
                    if(vnum.front()==M){
                        count++;
                        cout<<count<<'\n';
                        BOOL = true;
                        break;
                    }
                    else{
                        v1.pop();
                        vnum.pop();
                        count++;
                        break;
                    }
                }
                else{
                    int a = v1.front();
                    v1.pop();
                    v1.push(a);
                    int b = vnum.front();
                    vnum.pop();
                    vnum.push(b);
                }
            }
            if(BOOL)break;
            }
    }
}
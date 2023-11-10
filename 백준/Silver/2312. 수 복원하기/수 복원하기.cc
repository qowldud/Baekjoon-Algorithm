#include <iostream>
#include <map>

using namespace std;

int main(void){
    map<int, int> m;
    int count;
    cin>>count;
    for(int i=0;i<count;i++){
        int q = 2;
        int num;
        cin>>num;
        while(1){
            if(num%q==0){
                if(m.find(q)==m.end()){
                    m.insert({q,1});
                }
                else{
                    m[q]+=1;
            }
            num/=q;
            }
            else{
                q+=1;
            }
            if(num==1)break;
        }
        for(auto it = m.begin();it != m.end();it++){
            cout<<it->first<<" "<<it->second<<'\n';
        }
        m.clear();

    }
}

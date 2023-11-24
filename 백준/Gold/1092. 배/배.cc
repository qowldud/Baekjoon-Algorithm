#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    vector<int> v1,v2;
    int num1, num2, count = 0;
    cin>>num1;
    for(int i=0;i<num1;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    cin>>num2;
    for(int i=0;i<num2;i++){
        int a;
        cin>>a;
        v2.push_back(a);
    }

    sort(v1.begin(),v1.end(),greater<>());
    sort(v2.begin(),v2.end(),greater<>());
    
    if(v1[0]<v2[0]){
        cout<<-1<<'\n';
        return 0;
    }

    while(v2.size()!=0){
        for(int i=0;i<num1;i++){
            int k = 0;
            int s = 0;
            while(k<v2.size()){
                if(v1[i]>=v2[k]){
                    v2.erase(v2.begin()+k);
                    break;
                }
                else {
                    k++;
                    s++;
                }
            }
            if(s==v2.size())break;
        }
        count+=1;
    }
    cout<<count<<'\n';
}
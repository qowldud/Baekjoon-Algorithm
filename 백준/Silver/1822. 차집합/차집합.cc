#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A,B;   
    vector<int> v1,v2, result;
    cin>>A>>B;
    int count = 0;
    for(int i=0;i<A;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }

    for(int i=0;i<B;i++){
        int a;
        cin>>a;
        v2.push_back(a);
    }

    sort(v2.begin(),v2.end());

    for(int i=0;i<A;i++){
        if(!(binary_search(v2.begin(),v2.end(),v1[i]))){
            count++;
            result.push_back(v1[i]);
        }
    }

    if(result.size() == 0){
        cout<<0<<'\n';
        return 0;
    }

    sort(result.begin(),result.end());
    
    cout<<count<<'\n';

    for(int i=0;i<count;i++){
        cout<<result[i];
        if(i!=count-1)cout<<" ";
    }
}
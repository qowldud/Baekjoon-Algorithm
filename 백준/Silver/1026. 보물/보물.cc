#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int num, sum = 0;
    cin>>num;
    vector<int> A,B;
    for(int i=0;i<num;i++){
        int a;
        cin>>a;
        A.push_back(a);
    }
    for(int i=0;i<num;i++){
        int b;
        cin>>b;
        B.push_back(b);
    }
    sort(A.begin(),A.end()); 
    for(int i=0;i<num;i++){
        int max = 0;
        int k;
        for(int j=0;j<B.size();j++){
            if(max<=B[j]){
                max = B[j];
                k = j;
            } 
        }
        sum +=A[i]*max;
        B.erase(B.begin()+k);
    }
    cout<<sum<<'\n';
}
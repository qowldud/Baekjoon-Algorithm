#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int num,a,min,repre;
    cin>>num;
    vector<int> v;
    for(int i=0;i<num;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<num;i++){
        int sum = 0;
        for(int j=0;j<num;j++){
            int k = v[i]-v[j];
            if(k<0)k=-k;
            sum += k;
        }
        if(i==0){
            min = sum;
            repre = v[i];
        }
        else{
            if(min>sum){
                min = sum;
                repre = v[i];
            }
        }
    }
    cout<<repre<<'\n';
}
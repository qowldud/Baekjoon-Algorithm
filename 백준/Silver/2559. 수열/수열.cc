#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num1, num2;
    cin>>num1>>num2;
    int a;
    int sum[num1];
    for(int i=0;i<num1;i++){
        cin>>a;
        if(i==0)sum[0]=a;
        else{
            sum[i] = sum[i-1]+a;
        }
    }
    int max = sum[num2-1];
    int count = num1-num2;
    for(int i=0;i<count;i++){
        int k = sum[i+num2]-sum[i];
        if(max<k)max = k;
    }
    cout<<max<<'\n';
}
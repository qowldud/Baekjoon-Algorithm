#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int num;
    cin>>num;
    int dp[1000001];
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i=4;i<=num;i++){
        dp[i] = dp[i-1]+1;
        if(i%2==0) dp[i] = min(dp[i],dp[i/2]+1);
        if(i%3==0) dp[i] = min(dp[i],dp[i/3]+1);
    }
    cout<<dp[num]<<'\n';
    }
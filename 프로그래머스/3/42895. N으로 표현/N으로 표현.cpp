#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int getNN(int N, int idx){
    int result = 0;
    for(int i=0;i<idx;i++){
        result = result*10 + N;
    }
    return result;
}

int solution(int N, int number) {
    if(N == number) return 1;
    vector<unordered_set<int>> dp(9);
    dp[1].insert(N);
    
    for(int k=2;k<=8;k++){
        for(int i=1;i<k;i++){
                for(int a: dp[i]){
                    for(int b: dp[k-i]){
                        dp[k].insert(a+b);
                        dp[k].insert(a-b);
                        dp[k].insert(a*b);
                        if(b != 0) dp[k].insert(a/b);
                    }
                }
        }
        dp[k].insert(getNN(N,k));
        if(dp[k].count(number))return k;
    }
    return -1;
    
}
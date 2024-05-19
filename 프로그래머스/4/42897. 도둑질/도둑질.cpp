#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> money){
  int n = money.size();
  vector<int> dp1(n,0);
  vector<int> dp2(n,0);
  dp1[0] = money[0];
  dp1[1] = max(money[0],money[1]);
  for(int i=2;i<n-1;i++){
    dp1[i] = max(money[i] + dp1[i-2],dp1[i-1]);
  }
  dp2[1] = money[1];
  for(int i=2;i<money.size();i++){
    dp2[i] = max(money[i] + dp2[i-2],dp2[i-1]);
  }

  int answer = max(dp1[n-2],dp2[n-1]);
  return answer;
}

int main(void){
  vector<int> money = {1,2,3,1};
  int result = solution(money);
  cout<<result<<'\n';
}
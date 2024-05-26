#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long binary_search(int n, vector<int> times){
  long long start = times[0];
  long long end = (long long)times[times.size()-1]*n;
  long long result = 0;
  while(start <= end){
    long long mid = (start + end)/2;
    long long count = 0;
    for(int i=0;i<times.size();i++){
      count += mid/times[i];
    }
    if(count < n){
      start = mid + 1;
    } else{
      result = mid;
      end = mid - 1;
    }
  }
  return result;
}

long long solution(int n, vector<int> times){
  sort(times.begin(),times.end());
  long long answer = binary_search(n, times);
  return answer;
}

int main(void){
  int n = 6;
  vector<int> times = {7,10};
  long long result = solution(n, times);
  cout<<result<<'\n';
}
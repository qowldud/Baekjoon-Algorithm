#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int distance, vector<int> rocks, int n){
  sort(rocks.begin(),rocks.end());
  int start = 1;
  int end = distance;
  int answer = 0;
  while(start <= end){
    int mid = (start + end) / 2;
    int a = 0;
    int count = 0;
    for(int i=0;i<rocks.size();i++){
      if(rocks[i]-a < mid) count++;
      else{
        a = rocks[i];
      }
    }
    if(distance-a < mid) count++;
    if(count > n){
      end = mid - 1;
    } else{
      start = mid + 1;
      answer = mid;
    }
  }
  return answer;
}
int main(void){
  int distance = 25;
  vector<int> rocks = {2,14,11,21,17};
  int n = 2;
  cout<<solution(distance,rocks,n);

}
#include <iostream>
#include <vector>

using namespace std;

int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  vector<long long> v;
  cin>>N;

  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(2);
  v.push_back(2);

  for(int i=0;i<N;i++){
    long long a;
    cin>>a;
    if(a < v.size()+1){
      cout<<v[a-1]<<'\n';
    }else{
      for(int j = v.size(); j < a; j++){
        long long k = v[j-5] + v[j-1];
        v.push_back(k);
      }
      cout<<v[a-1]<<'\n';
    }
  }
}
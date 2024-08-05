#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void){
  int N,M;
  cin>>N>>M;
  map<string, int> m;
  string number[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  for(int i=N;i<=M;i++){
    int a = i/10;
    int b = i%10;
    string s = "";

    if(a!=0){
      s += number[a];
    }
    if(s != "") s+= " ";
    s+= number[b];

    m[s] = i;
  }
  int k = 0;
  for(auto iter = m.begin(); iter != m.end(); iter++){
    cout<<iter->second<<" ";
    k++;
    if(k%10 == 0) cout<<"\n";
  }
}
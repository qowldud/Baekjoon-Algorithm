#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    int size = num_list.size();
    int count = 0;
    
    for(int i=0;i<size;i += n){
        vector<int> v;
        for(int j=i;j<i+n;j++){
            v.push_back(num_list[j]);
        }
        answer.push_back(v);
    }
    return answer;
}
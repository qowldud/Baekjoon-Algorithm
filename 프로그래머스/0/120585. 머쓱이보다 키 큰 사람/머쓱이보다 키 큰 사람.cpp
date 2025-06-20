#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    int n = array.size();
    sort(array.begin(), array.end());
    
    for(int i=0;i<array.size();i++){
        if(array[i] > height){
            n = i;
            break;
        }
    }
    
    answer = array.size() - n;
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int a = (1 + (k-1)*2)%numbers.size();
    if(a == 0){
        a = numbers.size();
    }
    answer = numbers[a-1];
    return answer;
}
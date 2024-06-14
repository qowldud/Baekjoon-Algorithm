#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end(),greater<int>());
    
    int start = 0;
    int end = people.size() - 1;
    while(start <= end){
        int sum = 0;
        sum += people[start];
        if(sum + people[end] <= limit){
            end--;
        }
        answer++;
        start++;
    }
    
    return answer;
}
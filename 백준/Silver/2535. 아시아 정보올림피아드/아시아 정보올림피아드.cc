#include <iostream>
#include <algorithm>

using namespace std;

struct studentInfo{
    int nation;
    int studentId;
    int score;
};


bool compare(studentInfo &s1, studentInfo &s2){
        return s1.score > s2.score;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin>>N;
    studentInfo SI[N];
    
    for(int i=0;i<N;i++){
        int a,b,c;
        cin>>a>>b>>c;
        SI[i].nation = a;
        SI[i].studentId = b;
        SI[i].score = c;
    }
    
    sort(SI, SI + N, compare);
    cout<<SI[0].nation<<" "<<SI[0].studentId<<'\n';
    cout<<SI[1].nation<<" "<<SI[1].studentId<<'\n';
    int k = 2;
    while(k < N){
        if(!((SI[0].nation == SI[1].nation) && (SI[1].nation== SI[k].nation))){
            cout<<SI[k].nation<<" "<<SI[k].studentId;
            break;
        }
        k++;
    }
    
}
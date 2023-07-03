#include <iostream>
#include <algorithm>
using namespace std;

struct people{
    int age;
    string name;
    int rank;
};
bool compare(people a, people b){
    if(a.age==b.age)return a.rank<b.rank;
    else return a.age<b.age;
}
int main(void){
    int num;
    cin>>num;
    struct people p[num];
    for(int i=0;i<num;i++){
        cin>>p[i].age>>p[i].name;
        p[i].rank = i;
    }
    sort(p,p+num,compare);
    for(int i=0;i<num;i++){
        cout<<p[i].age<<" "<<p[i].name<<'\n';
    }
    return 0;
}
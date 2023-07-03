#include <iostream>
#include <algorithm>
using namespace std;

struct pos{
    int x;
    int y;
};
bool compare(pos a, pos b){
    if(a.y==b.y) return a.x<b.x;
    else return a.y<b.y;
}
int main(void){
    int num;
    cin>>num;
    struct pos p[num];
    for(int i=0;i<num;i++){
        cin>>p[i].x>>p[i].y;
    }
    sort(p,p+num,compare);
    for(int i=0;i<num;i++){
        cout<<p[i].x<<" "<<p[i].y<<'\n';
    }
    return 0;
}
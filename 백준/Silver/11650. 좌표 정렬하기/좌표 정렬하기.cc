#include <iostream>
#include <algorithm>
using namespace std;

struct coor{
    int x;
    int y;
};
bool compare(coor a, coor b){
    if(a.x==b.x)return a.y<b.y;
    else return a.x<b.x;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num;
    cin>>num;
    struct coor array[num];
    for(int i=0;i<num;i++){
        cin>>array[i].x>>array[i].y;
    }
    sort(array,array+num,compare);
    for(int i=0;i<num;i++){
        cout<<array[i].x<<" "<<array[i].y<<'\n';
    }
    return 0;
}
#include <iostream>
using namespace std;

struct people{
    int height;
    int weight;
    int rank=1;
};
int main(void){
    int num;
    cin>>num;
    struct people p1[num];
    for(int i=0;i<num;i++){
        cin>>p1[i].weight>>p1[i].height;
    }
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(p1[i].height>p1[j].height&&p1[i].weight>p1[j].weight){
                p1[j].rank+=1;
            }
            else if(p1[i].height<p1[j].height&&p1[i].weight<p1[j].weight){
                p1[i].rank+=1;
            }
        }
    }
    for(int i=0;i<num;i++){
        cout<<p1[i].rank<<" ";
    }
    return 0;

}
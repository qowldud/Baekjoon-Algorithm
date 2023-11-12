#include <iostream>
#include <unordered_map>
using namespace std;

int main(void){
    unordered_map<int, int> m;
    int count, minimum;
    cin>>count;
    for(int i=0;i<count;i++){
        minimum = 1;
        int num;
        cin>>num;
        int array[num];
        for(int i=0;i<num;i++){
            cin>>array[i];
        }
        while(1){
            for(int i=0;i<num;i++){
                if(m.size()==0||m.find(array[i]%minimum)==m.end()){
                    m.insert({array[i]%minimum,1});
                }
                else{
                    break;
                }
            }
        if(m.size()==num)break;
        else {
            minimum++;
            m.clear();
            }
        }
        cout<<minimum<<'\n';
        m.clear();
    }
}
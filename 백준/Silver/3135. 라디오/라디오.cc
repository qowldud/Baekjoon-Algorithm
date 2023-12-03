#include <iostream>

using namespace std;

int main(void){
    int A,B;
    cin>>A>>B;
    int num;
    cin>>num;
    int array[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    int min = A-B;
    bool BOOL = true;
    if(min<0) min = (-min);
    for(int i=0;i<num;i++){
        int a = B-array[i];
        if(a<0) a= (-a);
        if(min>a){
            min = a;
            BOOL = false;
        }
    }
    if(BOOL)cout<<min<<'\n';
    else cout<<min+1<<'\n';
    }
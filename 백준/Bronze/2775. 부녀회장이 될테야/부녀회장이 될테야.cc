#include <iostream>
using namespace std;

int main(void){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int floor, room;
        cin>>floor;
        cin>>room;
        int people[floor+1][room];
        for(int k=0;k<floor+1;k++){
            if(k==0){
                for(int j=0;j<room;j++)people[0][j]=j+1;
                }
            else{
                for(int h=0;h<room;h++){
                    if(h==0)people[k][0]=1;
                else{  
                    int count=0;
                for(int j=0;j<=h;j++){
                    count+=people[k-1][j];
                }
                people[k][h]=count;
                }
                }
            }
            }
            cout<<people[floor][room-1]<<endl;
        }
        return 0;
    }
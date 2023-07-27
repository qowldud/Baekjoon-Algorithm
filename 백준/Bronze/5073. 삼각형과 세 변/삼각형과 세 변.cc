#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    while(1){
        int array[3];
        cin>>array[0]>>array[1]>>array[2];
        sort(array,array+3);
        if(array[0]==0&&array[1]==0&&array[2]==0)exit(0);
        else if(array[2]>=array[0]+array[1])cout<<"Invalid"<<'\n';
        else if(array[0]==array[1]&&array[1]==array[2]&&array[2]==array[0])cout<<"Equilateral"<<'\n';
        else if(array[0]!=array[1]&&array[1]!=array[2]&&array[2]!=array[0])cout<<"Scalene"<<'\n';
        else cout<<"Isosceles"<<'\n';
    }
}
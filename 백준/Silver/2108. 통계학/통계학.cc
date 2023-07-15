#include <iostream>
#include <algorithm>
#include <cmath>
#include <deque>
using namespace std;


int main(void){
    int num,a=0,b,c,d,max=0;
    deque<int> que;
    cin>>num;
    int array[num];
    int array1[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    sort(array,array+num);
    b = array[num/2];
    d = array[num-1]-array[0];
    for(int i=0;i<num;i++){
        a+=array[i];
    }
    if(num==1){
        cout<<array[0]<<'\n'<<array[0]<<'\n'<<array[0]<<'\n'<<0<<'\n';
    }
    else{
    for(int i=0;i<num;i++){
        int low,high;
            low = lower_bound(array,array+num,array[i])-array;
            high = upper_bound(array,array+num,array[i])-array;
            array1[i] = high - low;
            if(max<array1[i])max = array1[i];
    }
    for(int i=0;i<num;i++){
        if(array1[i]==max){
            if(i==0)que.push_back(array[i]);
            else {
                if(array[i]!=array[i-1])que.push_back(array[i]);
            }
        }
    }
    if(que.size()==1)c = que.front();
    else{
    c = que.at(1);
    }
    a = round((double)a/num);
    cout<<a<<'\n'<<b<<'\n'<<c<<'\n'<<d<<'\n';
    }
}
#include <iostream>

using namespace std;

int main(void){
    int wave;
    cin>>wave;
    if(380<=wave&&wave<425){
        cout<<"Violet";
    } else if(wave<450){
        cout<<"Indigo";
    }else if(wave<495){
        cout<<"Blue";
    }else if(wave<570){
        cout<<"Green";
    }else if(wave<590){
        cout<<"Yellow";
    }else if(wave<620){
        cout<<"Orange";
    }else if(wave<=780){
        cout<<"Red";
    }
}
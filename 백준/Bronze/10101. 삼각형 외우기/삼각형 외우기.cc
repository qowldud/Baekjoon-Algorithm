#include <iostream>
using namespace std;

int main(void){
    int a,b,c;
    cin>>a>>b>>c;
    int sum = a+b+c;
    if(a==60&&b==60&&c==60){
        cout<<"Equilateral"<<'\n';
    }
    else if(sum == 180){
        if(a!=b&&b!=c&&c!=a){
            cout<<"Scalene"<<'\n';
        }
        else{
            cout<<"Isosceles"<<'\n';
        }
    }
    else{
        cout<<"Error"<<'\n';
    }
}
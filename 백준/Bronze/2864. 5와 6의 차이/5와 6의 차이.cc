#include <iostream>
using namespace std;

int main(void){
    string num1,num2;
    cin>>num1>>num2;
    string min1 = num1;
    string min2 = num2;
    string max1 = num1;
    string max2 = num2;

    for(int i=0;i<num1.length();i++){
        if(num1[i]=='5')max1[i] = '6';
        if(num1[i]=='6')min1[i] = '5'; 
    }
    for(int i=0;i<num2.length();i++){
        if(num2[i]=='5')max2[i] = '6';
        if(num2[i]=='6')min2[i] = '5';
    }
    int a = stoi(min1);
    int b = stoi(min2);
    int c = stoi(max1);
    int d = stoi(max2);
    int min = a+b;
    int max = c+d;
    cout<<min<<" "<<max<<'\n';
}
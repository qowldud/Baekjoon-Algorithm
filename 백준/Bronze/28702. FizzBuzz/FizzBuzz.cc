#include <iostream>
#include <string>


using namespace std;

int main(void){
    string s[3];
    int a, k; 
    for(int i=0;i<3;i++){
        cin>>s[i];
    }
    for(int i=0;i<3;i++){
        if(atoi(s[i].c_str()) != 0){
            a = atoi(s[i].c_str());
            k = i;
            break;
        }
    }
    int num = a + 3 - k;
    if(num%3 == 0 && num%5 == 0){
        cout<<"FizzBuzz";
    } else if(num % 3 == 0){
        cout<<"Fizz";
    } else if(num%5 == 0){
        cout<<"Buzz";
    }else{
        cout<<num;
    }
    
}
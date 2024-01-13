#include <iostream>

using namespace std;

int main(void){
    long long num;
    cin>>num;

    long long count = 1;
    long result = 0;
    long k = 10;

    while(1){
        if(num > k){
            result += ((k-(k/10)) * count);
            count++;
            k*=10;
        }
        else{
            result += (num-((k/10)-1))*count;
            if(num == k)result += 1;
            break;
        }
    }
    cout<<result<<'\n';
}
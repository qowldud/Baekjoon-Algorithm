#include <iostream>

using namespace std;

int main(void){
    int a1,a2,b1,b2;
    cin>>a1>>b1>>a2>>b2;

    int num = a1 * b2 + a2 * b1;
    int deno = b1 * b2;

    if(num < deno){
        for(int i = num;i > 0;i--){
            if(num % i == 0 && deno % i == 0){
                cout<<num/i<<" "<<deno/i<<'\n';
                break;
            }
        }
    } else if(num == deno){
        cout<<1<<" "<<1<<'\n';
    } else{
        for(int i = deno; i > 0; i--){
            if(num % i == 0 && deno % i ==0){
                cout<<num/i<<" "<<deno/i<<'\n';
                break;
            }
        }
    }
}
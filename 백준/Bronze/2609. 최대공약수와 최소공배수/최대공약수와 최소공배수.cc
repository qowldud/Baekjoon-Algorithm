#include <iostream>
using namespace std;

int main(void){
    int a,b;
    int num;
    cin>>a>>b;
    if(a>b){
        for(int i=1;i<=b;i++){
            if(a%i==0&&b%i==0)num=i;
        }
    }
    else{
        for(int i=1;i<=a;i++){
            if(a%i==0&&b%i==0)num=i;
        }
    }
        int max = num;
        int min = num*(a/num)*(b/num);
        cout<<max<<endl;
        cout<<min<<endl;
        return 0;
}
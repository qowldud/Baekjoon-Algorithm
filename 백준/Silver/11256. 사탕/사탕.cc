#include <iostream>
#include <algorithm>

using namespace std;

struct box{
    int R;
    int C;
};

int main(void){
    int num;
    cin>>num;
    while(num--){
        int count = 0;
        int sum = 0;
        int J,N;
        cin>>J>>N;
        box B[N];
        int size[N];
        for(int i=0;i<N;i++){
            cin>>B[i].R>>B[i].C;
            size[i] = B[i].R*B[i].C;
        }
        sort(size,size+N,greater<>());
        sum += size[count];
        count++;
        while(sum<J){
            sum += size[count];
            count++;
        }
        cout<<count<<'\n';
    }
}
#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int num;
    cin>>num;

    while(num--){
        int N,M, count = 0;
        cin>>N>>M;
        int A[N];
        
        for(int i = 0; i<N; i++){
            cin>>A[i];
        }

        sort(A,A+N);

        for(int i = 0; i < M; i++){
            int B;
            cin>>B;
            for(int j = 0; j<N; j++){
                if(A[j] > B){
                    count = count + (N-j);
                    break;
                }
            }
        }

        cout<<count<<'\n';
    }
}
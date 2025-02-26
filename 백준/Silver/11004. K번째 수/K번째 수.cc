#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

void swap(int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int quickResult(int start, int end){
    if(start + 1 == end){
        if(v[start] > v[end]){
            swap(start, end);
        }
        return end;
    }
    int M = (start+end)/2;
    swap(start, M);
    int pivot = v[start];
    int i = start + 1;
    int j = end;
    
    while(i <= j){
        while(pivot < v[j] && j > 0){
            j--;
        }
        while(pivot > v[i] && i < v.size() - 1){
            i++;
        }
        
        if(i <= j){
            swap(i++, j--);
        }
    }
    
    v[start] = v[j];
    v[j] = pivot;
    return j;
}

void quickSort(int start, int end, int K){
    int pivot = quickResult(start, end);
    if(pivot == K){
        return ;
    } else if(pivot < K){
        quickSort(pivot + 1, end, K);
    }else if(pivot > K){
        quickSort(start, pivot - 1, K);
    }
}


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K;
    cin>>N>>K;
    
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    quickSort(0,N-1, K-1);
    cout<<v[K-1];
}
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(void){
    long long num,a,sum,count = 0;
    unordered_map<long long, int> m,m1;
    cin>>num;
    long long array[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
        if(m.find(array[i])!=m.end())m[array[i]]+=1;
        else m.insert({array[i],1});
    }
    sort(array,array+num);
    for(int i=0;i<num-1;i++){
        for(int j=i+1;j<num;j++){
            sum = array[i]+array[j];
            if(sum>array[num-1])break;
            if(binary_search(array,array+num,sum)){
                if(!(m1.find(sum)!=m1.end())){
                    if(array[i]==0){
                        if(array[j]==0&&m[0]==2) ;
                        else if(m[array[j]]==1) ;
                        else{
                            m1.insert({sum,0});
                            count += m[sum];
                        }
                    }
                    else if(array[j]==0){
                        if(array[i]==0&&m[0]==2) ;
                        else if(m[array[i]]==1) ;
                        else{
                            m1.insert({sum,0});
                            count += m[sum];
                        }
                    }
                    else{
                        m1.insert({sum,0});
                        count += m[sum];
                    }
                }
            }
        }
    }
    cout<<count<<'\n';
}
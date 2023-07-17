#include <iostream>
using namespace std;

int main(void){
    char wb[8][8] = {
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W'
};

char bw[8][8] = {
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B'
};
    int N,M,min=64,count1,count2;
    cin>>N>>M;
    char array[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<N-7;i++){
        for(int j=0;j<M-7;j++){
           count1 = 0, count2 = 0;
            for(int h=i;h<i+8;h++){
                for(int k=j;k<j+8;k++){
                    if(array[h][k]!=wb[h-i][k-j])count1+=1;
                    if(array[h][k]!=bw[h-i][k-j])count2+=1;
                }
            }
            if((min>=count1)&&(count2>=count1))min = count1;
            else if((min>=count2)&&(count1>=count2))min = count2;
        }
    }
    cout<<min<<'\n';
}
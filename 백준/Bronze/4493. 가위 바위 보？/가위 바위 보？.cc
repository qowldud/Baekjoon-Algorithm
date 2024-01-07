#include <iostream>

using namespace std;

int main(void){
    int num;
    cin>>num;
    for(int i = 0; i < num; i++){
        int num2;
        cin>>num2;
        int sc1 = 0, sc2 = 0;
        for(int j = 0; j < num2; j++){
            char player1, player2;
            cin>>player1>>player2;
            if(player1 == player2){
                sc1 += 1;
                sc2 += 1;
            }
            else if(player1 == 'R'&&player2 == 'P'){
                sc2 += 1;
            }
            else if(player1 == 'R' && player2 == 'S'){
                sc1 += 1;
            }
            else if(player1 == 'P' && player2 == 'R'){
                sc1 += 1;
            }
            else if(player1 == 'P' && player2 == 'S'){
                sc2 += 1;
            }
            else if(player1 == 'S' && player2 == 'R'){
                sc2 += 1;
            }
            else if(player1 == 'S' && player2 == 'P')sc1 += 1;
        }
        if(sc1 == sc2) cout<<"TIE"<<'\n';
        else if(sc1 > sc2) cout<<"Player 1"<<'\n';
        else cout<<"Player 2"<<'\n';
        
    }
}
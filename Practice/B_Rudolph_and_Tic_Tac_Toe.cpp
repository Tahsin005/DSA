#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char ttt[3][3];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin>>ttt[i][j];
            }
        }

        if(    (ttt[0][0] == 'X' && ttt[0][1] == 'X' && ttt[0][2] == 'X')
            || (ttt[1][0] == 'X' && ttt[1][1] == 'X' && ttt[1][2] == 'X')
            || (ttt[2][0] == 'X' && ttt[2][1] == 'X' && ttt[2][2] == 'X') 
            || (ttt[0][0] == 'X' && ttt[1][0] == 'X' && ttt[2][0] == 'X')
            || (ttt[0][1] == 'X' && ttt[1][1] == 'X' && ttt[2][1] == 'X')
            || (ttt[0][2] == 'X' && ttt[1][2] == 'X' && ttt[2][2] == 'X') 
            || (ttt[0][0] == 'X' && ttt[1][1] == 'X' && ttt[2][2] == 'X')
            || (ttt[0][2] == 'X' && ttt[1][1] == 'X' && ttt[2][0] == 'X')){
            cout << 'X' << endl;
        }

        else if((ttt[0][0] == 'O' && ttt[0][1] == 'O' && ttt[0][2] == 'O')
             || (ttt[1][0] == 'O' && ttt[1][1] == 'O' && ttt[1][2] == 'O')
             || (ttt[2][0] == 'O' && ttt[2][1] == 'O' && ttt[2][2] == 'O') 
             || (ttt[0][0] == 'O' && ttt[1][0] == 'O' && ttt[2][0] == 'O')
             || (ttt[0][1] == 'O' && ttt[1][1] == 'O' && ttt[2][1] == 'O')
             || (ttt[0][2] == 'O' && ttt[1][2] == 'O' && ttt[2][2] == 'O') 
             || (ttt[0][0] == 'O' && ttt[1][1] == 'O' && ttt[2][2] == 'O') 
             || (ttt[0][2] == 'O' && ttt[1][1] == 'O' && ttt[2][0] == 'O')){
            cout << 'O' << endl;
        }

        else if((ttt[0][0] == '+' && ttt[0][1] == '+' && ttt[0][2] == '+')
             || (ttt[1][0] == '+' && ttt[1][1] == '+' && ttt[1][2] == '+')
             || (ttt[2][0] == '+' && ttt[2][1] == '+' && ttt[2][2] == '+') 
             || (ttt[0][0] == '+' && ttt[1][0] == '+' && ttt[2][0] == '+')
             || (ttt[0][1] == '+' && ttt[1][1] == '+' && ttt[2][1] == '+')
             || (ttt[0][2] == '+' && ttt[1][2] == '+' && ttt[2][2] == '+') 
             || (ttt[0][0] == '+' && ttt[1][1] == '+' && ttt[2][2] == '+')
             || (ttt[0][2] == '+' && ttt[1][1] == '+' && ttt[2][0] == '+')){
            cout << '+' << endl;
        }

        else{
            cout << "DRAW"  << endl;
        }
    }

    return 0;
}
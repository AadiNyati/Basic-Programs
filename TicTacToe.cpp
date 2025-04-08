//TicTacToe Program
#include <iostream>
using namespace std;
class TicTacToe{
    public:
    char str[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
    int draw = 1;
    void frame(){
        cout<<str[1]<<'|'<<str[2]<<'|'<<str[3]<<endl;
        cout<<"-----"<<endl;
        cout<<str[4]<<'|'<<str[5]<<'|'<<str[6]<<endl;
        cout<<"-----"<<endl;
        cout<<str[7]<<'|'<<str[8]<<'|'<<str[9]<<endl;
    }
    void end(){
        if (str[1] == 'X' && str[2] == 'X' && str[3] == 'X'){
            cout<<"Player 1 wins!"<<endl;
            draw = 0;
        }
        if (str[4] == 'X' && str[5] == 'X' && str[6] == 'X'){
            cout<<"Player 1 wins!"<<endl;
            draw = 0;
        }
        if (str[7] == 'X' && str[8] == 'X' && str[9] == 'X'){
            cout<<"Player 1 wins!"<<endl;
            draw = 0;
        }
        if (str[1] == 'X' && str[4] == 'X' && str[7] == 'X'){
            cout<<"Player 1 wins!"<<endl;
            draw = 0;
        }
        if (str[2] == 'X' && str[5] == 'X' && str[8] == 'X'){
            cout<<"Player 1 wins!"<<endl;
            draw = 0;
        }
        if (str[3] == 'X' && str[6] == 'X' && str[9] == 'X'){
            cout<<"Player 1 wins!"<<endl;
            draw = 0;
        }
        if (str[1] == 'X' && str[5] == 'X' && str[9] == 'X'){
            cout<<"Player 1 wins!"<<endl;
            draw = 0;
        }
        if (str[3] == 'X' && str[5] == 'X' && str[7] == 'X'){
            cout<<"Player 1 wins!"<<endl;
            draw = 0;
        }
        if (str[1] == 'O' && str[2] == 'O' && str[3] == 'O'){
            cout<<"Player 2 wins!"<<endl;
            draw = 0;
        }
        if (str[4] == 'O' && str[5] == 'O' && str[6] == 'O'){
            cout<<"Player 2 wins!"<<endl;
            draw = 0;
        }
        if (str[7] == 'O' && str[8] == 'O' && str[9] == 'O'){
            cout<<"Player 2 wins!"<<endl;
            draw = 0;
        }
        if (str[1] == 'O' && str[4] == 'O' && str[7] == 'O'){
            cout<<"Player 2 wins!"<<endl;
            draw = 0;
        }
        if (str[2] == 'O' && str[5] == 'O' && str[8] == 'O'){
            cout<<"Player 2 wins!"<<endl;
            draw = 0;
        }
        if (str[3] == 'O' && str[6] == 'O' && str[9] == 'O'){
            cout<<"Player 2 wins!"<<endl;
            draw = 0;
        }
        if (str[1] == 'O' && str[5] == 'O' && str[9] == 'O'){
            cout<<"Player 2 wins!"<<endl;
            draw = 0;
        }
        if (str[3] == 'O' && str[5] == 'O' && str[7] == 'O'){
            cout<<"Player 2 wins!"<<endl;
            draw = 0;
        }
    }
    void play(){
        int coord, turn;
        for (turn = 1; turn <= 9; turn++){
            tstart:
            if (turn%2 != 0){
                cout<<"Player 1's turn. Enter the coordinates"<<endl;
                cin>>coord;
                if (coord <=9 && str[coord] == ' '){
                str[coord] = 'X';
                }
                else {
                    cout<<"Invalid move. Try again."<<endl;
                    goto tstart;
                }
            }
            else {
                cout<<"Player 2's turn. Enter the coordinates"<<endl;
                cin>>coord;
                if (coord <=9 && str[coord] == ' '){
                    str[coord] = 'O';
                }
                else {
                    cout<<"Invalid move. Try again."<<endl;
                    goto tstart;
                }
            }
            frame();
            end();
            if (draw == 0){
                break;
            }
            if (draw == 1 && turn == 9){
                cout<<"Game is a draw."<<endl;
            }
        }
    }
};
int main(){
    TicTacToe t1;
    t1.frame();
    t1.play();
    return 0;
}

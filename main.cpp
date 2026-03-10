#include <iostream>
#include <string>
#include "src/tictactoe.hpp"


bool validinputformovement(const std::string& inputuser) {
    if (inputuser.length() !=1) {

        return false;

    }

    if (inputuser[0] < '1' || inputuser[0] > '9') {
        return false;
    }
    return true;
}


bool validinputformovement(const std::string inputuser) {
    if (inputuser.length() !=1) {
        return false;
    }
    if (inputuser[0] == 'Y' || inputuser[0] == 'n' || inputuser[0] == 'N' || inputuser[0] == 'n' ) {
        return true;
    }
    return false;
}

int main() {
TTTMechanics tictactoe;
    std::string inputuserfield;
    bool playonemoretime = true;

    std::cout<<"Welcome to the Tic-Tac-Toe game!";
    std::cout<<"A Player is letter X and B Player is letter O";


    while (true) {
        tictactoe.resetgamefunction();
        std::cout<<"Player"<<tictactoe.getplayer()<<" enter a move (1-9): ";
        std::getline(std::cin,inputuserfield);
    }

}

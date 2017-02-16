#include <iostream>
#include <string>
#include <algorithm>
#include <ai.cpp>

//global board variable
std::string board[3][3] = {{"[ ]","[ ]","[X]"},
                            {"[ ]","[X]","[ ]"},
                            {"[X]","[X]","[ ]"}};
bool victory = false;

void printBoard() {
        for(int i = 0; i < 3; i++) {
            std::cout << board[0][i];
        }
    std::cout << std::endl;
        for(int i = 0; i < 3; i++) {
            std::cout << board[1][i];
        }
    std::cout << std::endl;
        for(int i = 0; i < 3; i++){
            std::cout << board[2][i];
        }
    std::cout << std::endl << std::endl;
}

std::string setPeice(int peice, std::string value) {
    //trashy code because && operator wouldnt work and i didnt have time to fix it
    //see commit history for original code
    if(peice == 1) {
        board[0][0] = "["+value+"]";
        return value;
    }else if(peice == 2){
        board[0][1] = "["+value+"]";
        return value;
    }else if(peice == 3){
        board[0][2] = "["+value+"]";
        return value;
    }else if(peice == 4){
        board[1][0] = "["+value+"]";
        return value;
    }else if(peice == 5){
        board[1][1] = "["+value+"]";
        return value;
    }else if(peice == 6){
        board[1][2] = "["+value+"]";
        return value;
    }else if(peice == 7){
        board[2][0] = "["+value+"]";
        return value;
    }else if(peice == 8){
        board[2][1] = "["+value+"]";
        return value;
    }else if(peice == 9){
        board[2][2] = "["+value+"]";
        return value;
    }else{
        return "Unidentified Index";
    }
}

void getUserInp() {
    int i;
    std::cout << "Type what cell you want to change" << std::endl;
    std::cin >> i;
    setPeice(i, "X");
    printBoard();
}

int main(void)
{
    Bob = new ai();
    return 0;
}

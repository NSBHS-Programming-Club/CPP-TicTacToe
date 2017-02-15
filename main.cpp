#include <iostream>
#include <string>

std::string board[3][3] = {{"[ ]","[ ]","[ ]"},{"[ ]","[ ]","[ ]"},{"[ ]","[ ]","[ ]"}};

void printBoard() {
        for(int i = 0; i < 3; i++) {
            std::cout << board[i][0];
        }
    std::cout << std::endl;
        for(int i = 0; i < 3; i++) {
            std::cout << board[i][1];
        }
    std::cout << std::endl;
        for(int i = 0; i < 3; i++){
            std::cout << board[i][2];
        }
    std::cout << std::endl << std::endl;
}

std::string setPeice(int peice, std::string value) {
    if(peice <= 3){
        board[peice][0] = "["+value+"]";
        return value;
    }
    else if(peice > 2 && peice <= 5){
        board[peice][1] = "["+value+"]";
        return value;
    }else if(peice > 5 && peice <= 8){
        board[peice][2] = "["+value+"]";
        return value;
    }else {
        return "Unidentified index";
    }
}

int main(void)
{
    printBoard();
    setPeice(1, "O");
    printBoard();
    return 0;
}

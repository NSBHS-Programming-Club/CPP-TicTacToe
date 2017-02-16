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

bool evalVictory(std::string boardState) {
    bool win = false;
    
    for(int i = 0; i < 9; i++){
                if(i < 3){
                    boardState[0][i] = testBoard[0][i];
                }else if((i > 3) && (i <= 6)){
                    boardState[1][i] = testBoard[1][i];
                }else{
                    boardState[2][i] = testBoard[2][i];
                }
            }

    if (testBoard[0][0] != "[ ]" && (testBoard[0][0] == testBoard[0][1] && testBoard[0][0] == testBoard[0][2] ||
		testBoard[0][0] == testBoard[1][0] && testBoard[0][0] == testBoard[2][0] ||
		testBoard[0][0] == testBoard[1][1] && testBoard[0][0] == testBoard[2][2])){

        win = true;
        return win;
    }

    if (testBoard[1][1] != "[ ]" && (testBoard[1][1] == board[1][0] && testBoard[1][1] == testBoard[1][2] ||
		testBoard[1][1] == testBoard[0][1] && testBoard[1][1] == testBoard[2][1] ||
		testBoard[1][1] == testBoard[2][0] && testBoard[1][1] == testBoard[0][2])) {

		win = true;
        return win;
    }

    if (testBoard[2][2] != "[ ]" && (testBoard[2][2] == testBoard[0][2] && testBoard[2][2] == testBoard[1][2] ||
		testBoard[2][2] == testBoard[2][0] && testBoard[2][2] == testBoard[2][1])){

		win = true;
        return win;
    }
}

int main(void)
{
    Bob = new ai();
    return 0;
}

#include <iostream>
#include <string>

//global board variable
std::string board[3][3] = {{"[ ]","[ ]","[ ]"},{"[ ]","[ ]","[ ]"},{"[ ]","[ ]","[ ]"}};
bool victory = false;

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
    //trashy code because && operator wouldnt work and i didnt have time to fix it
    //see commit history for original code
    if(peice == 1) {
        board[0][0] = "["+value+"]";
        return value;
    }else if(peice == 2){
        board[1][0] = "["+value+"]";
        return value;
    }else if(peice == 3){
        board[2][0] = "["+value+"]";
        return value;
    }else if(peice == 4){
        board[0][1] = "["+value+"]";
        return value;
    }else if(peice == 5){
        board[1][1] = "["+value+"]";
        return value;
    }else if(peice == 6){
        board[2][1] = "["+value+"]";
        return value;
    }else if(peice == 7){
        board[0][2] = "["+value+"]";
        return value;
    }else if(peice == 8){
        board[1][2] = "["+value+"]";
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

bool evalVictory() {
    bool win = false;
    for(int i = 0; i < 8; i++){
        if(i < 3) {
            std::string currentCell = board[i][0];
                if(i == 1) {
                    //condition 1
                    int winTimer = 0;
                    if(board[i++][0] == currentCell){
                        winTimer++;
                    }else if(board[i][2] == currentCell){
                        winTimer++;
                    }else if(board[i++][2] == currentCell){
                        winTimer ++;
                    }else {
                        win = false;
                    }
                }
        }
    }
}

int main(void)
{
    printBoard();
    getUserInp();
    return 0;
}

#include <iostream>

class ai{

    private:
        void makeMove(std::string opponentVal) {
            for(int i = 0; i < 9; i++){
                for(int z = 0; z < 3; z++){
                    if(ai::aiBoard[z][i] == "[ ]"){
                        ai::aiBoard[z][i] = "[X]";
                        ai::aiEvalMove(z, i, "[X]");
                    }else {
                        continue;
                    }
                }
            }
        }

    public:
        std::string aiBoard[3][3];

        int aiEvalMove(int yVal, int xVal, std::string peice) {
            std::string currentPos = ai::aiBoard[yVal, xVal];
            //checks win
            bool vicotry = ai::evalVictory(ai::aiBoard);
            if(victory) {
                return 10;
            }else {
                //start look ahead
                lookAhead(ai::aiBoard);
            }
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
        int lookAhead(std::string board) {
            //where will player set peice?
            for(int i = 0; i < 9; i++) {
                for(int z = 0; z < 3; z++){
                    if(ai::aiBoard[z][i] == "[ ]"){
                        ai::aiBoard[z][i] = "[O]";
                        ai::aiEvalMove(z, i, "[O]")
                    }
                }
            }
        }
        //assignment of arrays is not good
        void aiCopy() {
            for(int i = 0; i < 9; i++){
                if(i < 3){
                     ai::aiBoard[0][i] = board[0][i];
                }else if((i > 3) && (i <= 6)){
                     ai::aiBoard[1][i] = board[1][i];
                }else{
                    ai::aiBoard[2][i] = board[2][i];
                }
            }
        }
    ai(){
        aiCopy();
    }
};

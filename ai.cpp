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
            std::string currentPos = aiBoard[yVal, xVal];

            //checks win
            bool vicotry = evalVictory(ai::aiBoard);
            if(victory) {
                return 10;
            }else {
                //start look ahead
                lookAhead(ai::aiBoard);
                return ;
            }
        }

        int lookAhead(std::string board) {
            //where will player set peice?

        }

        //assignment of arrays is not good
        void aiCopy() {
            for(int i = 0; i < 9; i++){
                if(i < 3){
                    board[0][i] = ai::aiBoard[0][i];
                }else if((i > 3) && (i <= 6)){
                    board[1][i] = ai::aiBoard[1][i];
                }else{
                    board[2][i] = ai::aiBoard[2][i];
                }
            }
        }

        ai(){
            aiCopy();
        }
};

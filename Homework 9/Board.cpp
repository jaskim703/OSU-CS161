/**************************************
**Author: Jasmine Kim
**Date: 8-7-17
**Description: This file contains and defines the functions of the Board class.
**************************************/

#include <iostream>
#include "Board.hpp"
using namespace std;


Board::Board()
{
    for (int i=0 ; i<3 ; i++){
	for (int j=0 ; j<3 ; j++){
	    gameBoard[i][j] = '.';
	}
    }
}


/**This allows the player to mark a spot if it is empty
**(empty meaning it has a '.')*******/
bool Board::makeMove(int xSpot, int ySpot, char p)
{
	if (gameBoard[xSpot][ySpot] == '.')
	{
	    gameBoard[xSpot][ySpot] = p;
	    return true;

	}else{
	    return false;
	}
}

/**This allows the player to check the state of the game. 
**The states are player X wins, player O wins, the game is 
**unfinished, and the game is a draw***/
State Board::gameState()
{
	int count = 0;
	for (int i=0; i<3 ; ++i){
	    for (int j=0 ; j<3 ; ++j){
		if(gameBoard[i][j] == '.'){
			++count;
		}
	    }
	}
	if (count == 0){
	    return DRAW;
	}
	for (int i=0 ; i<3 ; ++i){
	    if(gameBoard[0][i]==gameBoard[1][i] && gameBoard[1][i]==gameBoard[2][i]){
		if(gameBoard[0][i]== 'x'){
			return X_WON;
		}else if(gameBoard[0][i] == 'o'){
			return O_WON;
		}
	     }
	
	     if(gameBoard[i][0]==gameBoard[i][1] && gameBoard[i][1]==gameBoard[i][2]){
		if(gameBoard[i][0] == 'x'){
			return X_WON;
		}else if(gameBoard[i][0] == 'o'){
			return O_WON;
		}

	     }
	}
	if((gameBoard[0][0]==gameBoard[1][1] && gameBoard[1][1]==gameBoard[2][2]) || (gameBoard[0][2]==gameBoard[1][1]&&gameBoard[1][1]==gameBoard[2][0])){
		if(gameBoard[1][1]== 'x'){
			return X_WON;
		}else if(gameBoard[1][1]== 'o'){
			return O_WON;
		}
	}
	return UNFINISHED;
     }

/** This function prints the game board  **/
void Board::print()
{
    cout << "\n" << "   0 1 2  \n";
    for(int i=0; i<3 ; i++){
	cout << i << "  ";
	for(int j=0; j<3; j++){
		cout << gameBoard[i][j] << " ";
	}
	cout << endl;
    }
    cout << endl;
    return;
}
 	


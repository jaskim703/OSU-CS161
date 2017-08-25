/***************************************
**Author: Jasmine Kim
**Date: 8-7-17
**Description: This is the class specification file for Board.
***************************************/

#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>

//used to return one of four values: x wins, y wins, draw game, or unfinished.
enum State
{
    X_WON, O_WON, DRAW, UNFINISHED
};


class Board
{
    private:
	char gameBoard[3][3];

    public:
	Board();	//constructor
	bool makeMove(int xSpot, int ySpot, char p);
	State gameState();
	void print();   //prints out the current board to the screen

};


#endif

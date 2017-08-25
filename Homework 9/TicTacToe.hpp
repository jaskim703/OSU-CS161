/*************************************
**Author: Jasmine Kim
**Date: 8-9-17
**Description: This is the class specification file for TicTacToe.
**************************************/

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include "Board.hpp"


class TicTacToe
{
    private: 
	Board ticBoard;    //board object for tictactoe board
	bool firstPlayerX;   //this will keep track of which players turn it is
    
    public:
	TicTacToe();
	TicTacToe(char p);
	void play();	   //this will start the game and in the end, declare the outcome


};

#endif

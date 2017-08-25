/***************************************
**Author: Jasmine Kim
**Date: 8-9-17
**Description: This will be the main file where the program asks the user which player should go first,
**and then creates the TicTacToe object and starts the game.
*****************************************/

#include<iostream>
#include "TicTacToe.hpp"
using namespace std;


//Default constructor which sets the player X first value to true.
TicTacToe::TicTacToe()
{
    firstPlayerX = true;
}

//Constructor that will determine which player will start first.
TicTacToe::TicTacToe(char p)
{
    if (p == 'x'){
	firstPlayerX = true;
    }else{
	firstPlayerX = false;
    }
}


/*****************************************
**This function allows for the game to be played.
**The function will print an empty board first and while the
**game is unfinished, will allow the players to enter values
**to mark their spot on the board. This function will also
**print out the result of the game based on the spots that have
**been marked/played.
*******************************************/
void TicTacToe::play()
{
    //prints out empty board
    ticBoard.print();
    int xSpot, ySpot;

    //Continue the function as long as the state of the game is unfinished
    while (ticBoard.gameState() == UNFINISHED)
	{
	    if(firstPlayerX){
		    cout << "Player X: please enter your move(put space between values). ";
	   	    cin >> xSpot >> ySpot;
		    
		    //Will alert the player if the spot they chose is already taken
		    if(!ticBoard.makeMove(xSpot,ySpot,'x')){
			cout << "That square is already taken." << endl;
		    }else{
			//if false, the next players turn will start
			firstPlayerX = false;
		    }
	    }else{
		    cout << "Player O: please enter your move(put space between values). ";
	    	    cin >> xSpot >> ySpot;
		    if(!ticBoard.makeMove(xSpot,ySpot,'o')){
			cout << "That square is already taken." << endl;
		    }else{
			firstPlayerX = true;
		    }
	    }
	    ticBoard.print();
	}

    

     if(ticBoard.gameState() == X_WON){
	cout << "Player X has won!" << endl;
     }else if(ticBoard.gameState() == O_WON){
	cout << "Player O has won!" << endl;
     }else if(ticBoard.gameState() == DRAW){
	cout << "The game is a draw." << endl;
     }

}



int main()
{
     char p;

     cout << "Which player will go first? X or O?" << endl;
     cin >> p;

     //This will make the new game and the board	 
     TicTacToe newGame(p);
     newGame.play();
     return 0;
}
 

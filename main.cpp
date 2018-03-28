//Author:Xinrui Li
#include <iostream>

using namespace std;

//GLOBAL CONSTANTS
const int ROWS = 3;
const int COLUMNS = 3;
const char BLANK = ' ';
const char X = 'X';
const char O = 'O';
const int QUIT = -1;

int main()
{
  //3x3 matrix of characters, initially with blank spaces in each position
  char board[3][3] = {{'1', '2', '3'},
                      {'4', '5', '6'},
                      {'7', '8', '9'}};

  char turn = X; //Player X always goes first
  int row;
  int column;
  bool playing = true; //Continue playing by default

  do
  {
    cout<<turn<<"'s turn.\n";
    cout<<"Which column and row (0-2, or -1 for both to quit)?\n";
    cin>>column;
    cin>>row;

    //Make sure the user isn't quitting
    if(column == QUIT && row == QUIT)
    {
      playing = false;
    }
    //Print error if the column and/or row is out of bounds of 0-2
    else if( column < 0 || row < 0 || column > 2 || row > 2 )
    {
      cout<<"Values must be between 0 and 2.\n";
    }
    //TODO: Place the piece and swap turns
    //Outline
    //1. When neither of the (above) if nor else if statements are true, then...
    //1-A.  Assign the board location of row and column to the value of turn
    //1-B.  When turn has the value 'X', then...
    //1-B-1.  turn should be assigned the value 'O'
    //1-C.  In any other case, then...
    //1-C-1.  turn should be assigned the value 'X'
    
    cout<<"\nBOARD\n-----\n";
    //TODO: Print the current board
    //Outline
    //1. Traverse through each row, calling the current row r
    //1-A. Traverse through each column in row r, calling the current column c
    //1-A-1.  Display the value of the board at location of r and c
    //1-A-2. Display a space
    //1-B. Display an newline to move to the next row of the board
    
  }while( playing );

  cout<<"Goodbye!\n";

  return 0;
}

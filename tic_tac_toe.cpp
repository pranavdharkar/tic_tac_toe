#include <iostream>
#include <sstream>

using namespace std;

void displaySamBoard();
void displayBoard();
void isValidSymbol(string str, string player1);
void isSpotNumValid(string player, char symbol);
bool checkWinner(string player, char playerSymbol);

char player1Symbol, player2Symbol;
int spotNumber;

char board [9] [2] = {
    {'1', ' '}, {'2', ' '}, {'3', ' '},
    {'4', ' '}, {'4', ' '}, {'5', ' '},
    {'6', ' '}, {'7', ' '}, {'9', ' '}
};

int main()
{
    cout << "\nWelcome to Tic Tac Toe\n\n";
    displaySamBoard();
    cout << "\n\nRemember the spot number\n\n";

    string player1;
    cout << "Enter Player1 Name: ";
    getline(cin, player1); // used getlien because cin's new line input buffer

    string player2;
    cout << "Enter Player2 Name: ";
    getline(cin, player2);

    string str;
    cout << player1 << " - Choose your symbol (X or O): ";
    getline(cin, str);

    isValidSymbol(str, player1);

    for(int i = 0; i < 4; i++)
    {
        cout << endl;
        displayBoard();

        isSpotNumValid(player1, player1Symbol);
        if(checkWinner(player1, player1Symbol))
        {
            cout << "Press Enter to exit...";
            cin.get();
            return 0;
        }

        cout << endl;
        displayBoard();

        isSpotNumValid(player2, player2Symbol);
        if(checkWinner(player2, player2Symbol))
        {
            cout << "Press Enter to exit...";
            cin.get();
            return 0;
        }
    }

    cout << endl;
    displayBoard();

    isSpotNumValid(player1, player1Symbol);
    if(checkWinner(player1, player1Symbol))
    {
        cout << "Press Enter to exit...";
        cin.get();
        return 0;
    }

    cout << endl;
    displayBoard();

    cout << "Draw!\n\nThanks for playing!\n\n";

    cout << "Press Enter to exit...";
    cin.get();

    return 0;
}

void displayBoard()
{
    int n = 0;
    for(int i = 0; i < 3; i++)
    {
        cout << "+---+---+---+" << endl;
        for(int j = 0; j < 3; j++)
        {
            cout << "| " << board [n++] [1] << " ";
        }
        cout << "|" << endl;
    }
    cout << "+---+---+---+\n\n";
}

void displaySamBoard()
{
    int n = 0;
    for(int i = 0; i < 3; i++)
    {
        cout << "+---+---+---+" << endl;
        for(int j = 0; j < 3; j++)
        {
            cout << "| " << ++n << " ";
        }
        cout << "|" << endl;
    }
    cout << "+---+---+---+";
}

void isValidSymbol(string str, string player1)
{
    while(true)
    {
        if(str.length() == 1 && (str[0] == 'X' || str[0] == 'x' || str[0] == 'O' || str[0] == 'o'))
        {
          if(str[0] == 'X' || str[0] == 'x')
          {
              player1Symbol = 'X';
              player2Symbol = 'O';
          }
          else
          {
            player1Symbol = 'O';
            player2Symbol = 'X';
          }
          break;
        }
        else 
        {
          cerr << "Invalid Symbol.\n" << player1 << " - Please enter valid symbol (X or O): ";
          getline(cin,str);
        }
    }    
}

void isSpotNumValid(string player, char symbol)
{
  string str;
  cout << player << " - Enter your spot number (1-9): ";
  getline(cin,str); // Use getline to read the whole line

  while (true)
  {
    stringstream ss(str); // Use stringstream for parsing

    if (ss >> spotNumber && ss.eof()) // Check if parsing is successful AND nothing is left
    {
        if(spotNumber <= 9 && spotNumber >= 1)
        {
            if(board [spotNumber-1] [1] == ' ')
            {
                board [spotNumber-1] [1] = symbol;
                break;
            }
            else
            {
                cerr << "Invalid spot number.\n" << player << " - Enter valid spot number (1-9): ";
                getline(cin,str);
            }
        }
        else 
        {
            cerr << "Invalid spot number.\n" << player << " - Enter valid spot number (1-9): ";
            getline(cin,str);
        }
    } 
    else 
    {
      cerr << "Invalid spot number.\n" << player << " - Enter valid spot number (1-9): ";
      getline(cin,str);
    }
  }
}

bool checkWinner(string player, char playerSymbol)
{
    if((board[0][1] == playerSymbol && board[1][1] == playerSymbol && board[2][1] == playerSymbol) ||
       (board[0][1] == playerSymbol && board[3][1] == playerSymbol && board[6][1] == playerSymbol) ||
       (board[6][1] == playerSymbol && board[7][1] == playerSymbol && board[8][1] == playerSymbol) ||
       (board[2][1] == playerSymbol && board[5][1] == playerSymbol && board[8][1] == playerSymbol) ||
       (board[0][1] == playerSymbol && board[4][1] == playerSymbol && board[8][1] == playerSymbol) ||
       (board[2][1] == playerSymbol && board[4][1] == playerSymbol && board[6][1] == playerSymbol) ||
       (board[1][1] == playerSymbol && board[4][1] == playerSymbol && board[7][1] == playerSymbol) ||
       (board[3][1] == playerSymbol && board[4][1] == playerSymbol && board[5][1] == playerSymbol))
    {
        cout << endl;
        displayBoard();

        cout << player << " is the winner.\n\n" << "Thanks for playing!\n\n";
        return true;
    }
    else
    {
        return false;
    }
}


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Spelare{

protected:
	string namn;
	int value;

public:

	Spelare(string n, int v): namn(n), value(v){}

	bool win(int *board){
		int val = 3*value;
		return (board[0] + board[1] + board[2] == val ||
				board[3] + board[4] + board[5] == val ||
				board[6] + board[7] + board[8] == val ||
				board[0] + board[3] + board[6] == val ||
				board[1] + board[4] + board[7] == val ||
				board[2] + board[5] + board[8] == val ||
				board[0] + board[4] + board[8] == val ||
				board[2] + board[4] + board[6] == val);
	}

	virtual void play(int *board) = 0;
};

class HumanPlayer: public Spelare{

public:

	HumanPlayer(string n, int v): Spelare(n, v){}

	void play(int *board){
		int input = -1;
		cout << namn << " play: ";
		while(input < 0 || input > 8 || board[input] != 0) cin >> input;
		board[input] = value;
	}
};

class RandomPlayer: public Spelare{

public:

	RandomPlayer(string n, int v): Spelare(n, v){}

	void play(int *board){
		int input = rand()%9;
		while(board[input] != 0) input = rand()%9;
		board[input] = value;
	}
};

/* ----- Här har vi SmartPlayer klassen... ----- */ 
class SmartPlayer: public Spelare{
	int EDGE = 1;
	int CORNER = 3;
	int CENTER = 5;
	int WIN = 15;
	int LOSS = 10;
	// Lite weights som den använder för att proiritera olika positioner
public:

	SmartPlayer(string n, int v): Spelare(n, v){}

	/* Denna metod går ut på att utvärdera varje ledig position på brädet
	 * och ge positionerna ett score beroende på hur "bra" positionen är.
	 * Den med högst score väljs */
	void play(int *board){
		int max = 0, choice = -1;
		for(int i=0, score; i<9; ++i){ // Loop through positions 1-9
			if(board[i] == 0){ // If it's empty...
				score = 0; // Set score = 0
				score += getPieceScore(board, i); // Add score associated with type of position
				board[i] = value; // Set piece to own value
				if(win(board)) score += WIN; // If win, add win score
				value = -value; // Invert value to check if opponent wins
				board[i] = value; // Set to (opponents) value
				if(win(board)) score += LOSS; // if (opponent) win, add loss score
				value = -value; // Invert back to own score
				board[i] = 0; // Reset position
				if(score > max){ // Check if score higher than max
					max = score;
					choice = i;
				}
			}
		}
		board[choice] = value; // Set chosen piece
	}

	// Returns the score for whatever type of position index is
	int getPieceScore(int *board, int index){
		if(index == 4) return CENTER; // 4 = center position
		else if(index%2 == 0) return CORNER; // All even indices that are not 4 = corner
		else return EDGE; // else edge
	}
};

void printBoard(int *board){
	for(int i=0; i<9; ++i){
		switch(board[i]){
			case 0: cout << ' ';
			break;
			case 1: cout << 'X';
			break;
			case -1: cout << 'O'; 
		}
		if((i+1)%3 == 0) cout << endl;
		else cout << '|';
	}
	cout << endl;
}

void match(Spelare *sp1, Spelare *sp2){
	int *board = new int[9];
	for(int i=0; i<9; ++i) board[i] = 0;
	printBoard(board);
	for(int turns = 0; turns<9 && !sp1->win(board) && !sp2->win(board); ++turns){
		if(turns%2 == 0) sp1->play(board);
		else sp2->play(board);
		printBoard(board);
	}
	delete[] board;
}

int main(){
	srand(time(0));
	Spelare *s2 = new SmartPlayer("Du", 1);
	Spelare *s1 = new RandomPlayer("Rand", -1);
	match(s1, s2);
	delete(s1);
	delete(s2);
}

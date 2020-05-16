#pragma once
#include <iostream>
#include <string>
#include <iomanip>

//===== CONSTANTS =====
const char Sign_A = 'X'; //'X' sign 
const char Sign_a = 'x'; //last move of 'X' sign
const char Sign_B = 'O'; //'O' sign
const char Sign_b = 'o'; //last move of 'O' sign
const unsigned WIDTH_MIN = 3; //min board width
const unsigned WIDTH_MAX = 40; //max board width
const unsigned HEIGHT_MIN = 3; //min board height
const unsigned HEIGHT_MAX = 20; //max board height
const unsigned K_MIN = 3; //min number of signs to win
const unsigned K_MAX = 6; //max number of signs to win
const unsigned MENU_POSITION_DIM = 29; //number of menu positions - the first dimension of menu_pos array
const unsigned MENU_DESCRIPTION_DIM = 55; //number of menu descriptions - the first dimension of menu_des array
const unsigned LANG_DIM = 2; //number of available languages - the second dimension of description arrays

//===== STRUCTURES =====
struct GameData
{
	unsigned int K;  //number of signs to win
	unsigned int N;  //number of fields vertically (rows)
	unsigned int M;  //number of fields horizontally (columns)
	unsigned int lang;  //language: 0 - polish, 1 - english 
	bool computer_starts; //0 - human starts, 1 - computer starts
	char human_sgn;  //human sign 
	short clear_every_move;  //1 - clear screen every move, 0 - don't clear
	char comp_sgn;  //computer sign
	unsigned int fields; //field numbers
	char last_human; //human's last move
	char last_comp; //computer's last move
	unsigned free_fields; //number of free fields
	char winner;  //'R'-tie, 'C'-player, 'K'-computer, 'O'-unresolved 
};

struct Point
{
	int row; //row
	int col; //column
	Point() { row = 0; col = 0; }
	Point(int a, int b) { row = a; col = b; }
	Point operator+(Point p)
	{
		return Point(row + p.row, col + p.col);
	};
	Point operator=(Point p)
	{
		(*this).row = p.row; (*this).col = p.col;
		return *this;
	};
	bool operator==(Point p)
	{
		if (row == p.row && col == p.col) return true;
		else return false;
	};
};

//===== VARIABLES =====
extern GameData gd;
extern char** board;  //pointer to 2D dynamic array 
extern unsigned menu_choice, prev_menu; //variables for menu switching
extern std::string menu_pos[MENU_POSITION_DIM][LANG_DIM]; //all menu positions array
extern std::string menu_des[MENU_DESCRIPTION_DIM][LANG_DIM]; //all menu descriptions array

//===== AUXILIARY FUNCTIONS =====
void init0(); //load default settings
void init1(); //load changed settings
void move(); //play
void search_field(Point&); //looks for field (computer player)

int check_game_result(char, Point, Point); //check if there is a winner/tie
int check_direction(char, Point, Point, Point); //check specific direction for win
int check_win(char, Point); //check if the player wins
long int max(long int, long int);
long int min(long int, long int);

char field_char(Point); //returns char in specified field
void put_sign(char, Point); //puts sign in specified field
int field_occupied(unsigned); //1 - field occupied, 0 - empty

bool read_int(int&, int, int, int = 1, int = 0); //read int and check if it's in range
bool read_row(int&); //choose row - user input
bool read_col(int&); //choose column - user input

Point draw_field(unsigned, Point, Point); //draw field for computer player with same propability

void print_board();
void choose_field_desc();

//row and column numbering (for print_board() utility)
char c1(int);
char c0(int);
char ck1(int);
char ck0(int);

//===== MENU FUNCTIONS =====
void menu1(); //initial menu
void menu2(); //language choice
void menu3_4a(); //text only for menu 3 and 4
void menu3(); //show settings
void menu4(); //change settings
void menu5(); //choose number of signs to win
void menu6(); //change board size
void menu7(); //choose player's sign 
void menu8(); //choose starter
void menu9(); //choose whether or not to clean window every move 
void menu10(); //playing
void menu11(); //interrupt the game
void menu12(); //new game
void menu13(); //game ended
void menu14(); //game description
void menu15(); //exit
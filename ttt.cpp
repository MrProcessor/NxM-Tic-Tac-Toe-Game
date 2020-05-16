#include "ttt.hpp"

struct GameData;
GameData gd;
char** board = NULL;
unsigned menu_choice, prev_menu; //variables that help switch menu
std::string menu_pos[MENU_POSITION_DIM][LANG_DIM]; //menu positions array
std::string menu_des[MENU_DESCRIPTION_DIM][LANG_DIM]; //menu descriptions array

//===== MENU FUNCTIONS =====

void menu1()
{
	char choice;
	prev_menu = 1;
	do {
		system("cls");
		std::cout << "\t\t\t " << menu_des[0][gd.lang] << " \n\n\n";
		std::cout << "\tAuthor: DOMINIK MROWIEC \n";
		std::cout << "\tGitHub: https://github.com/mrprocessor \n\n\n";
		std::cout << "\n\t " << menu_des[1][gd.lang] << " \n\n";
		std::cout << " \t === " << menu_des[2][gd.lang] << ": (1-5) ===\n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(1) " + menu_pos[6][gd.lang] << "(2) " << menu_pos[1][gd.lang] << " \n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(3) " + menu_pos[2][gd.lang] << "(4) " << menu_pos[0][gd.lang] << " \n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(5) " + menu_pos[3][gd.lang] << " \n\n";
		std::cout << "\t ? "; std::cin >> choice;
	} while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5');
	switch (choice)
	{
		case '1': menu_choice = 10; break;
		case '2': menu_choice = 3; break;
		case '3': menu_choice = 14; break;
		case '4': menu_choice = 2; break; 
		case '5': menu_choice = 15; break;
	}
}

void menu2() {
	char choice;
	do {
		system("cls");
		std::cout << "\n\t " << menu_des[3][gd.lang] << " \n\n";
		std::cout << " \t === " << menu_des[4][gd.lang] << ": (1-2) ===\n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(1) " + menu_pos[4][gd.lang] << "(2) " << menu_pos[5][gd.lang] << "\n\n";
		std::cout << "\t ? "; std::cin >> choice;
	} while (choice != '1' && choice != '2');
	switch (choice)
	{
		case '1': gd.lang = 1; break;
		case '2': gd.lang = 0; break;
	}
	menu_choice = prev_menu;
}

void menu3_4a() {
	std::cout << " \t === " << menu_des[5][gd.lang] << ": ===\n\n";
	std::cout << " " << menu_des[6][gd.lang] << ":" << gd.K << "\n";
	std::cout << " " << menu_des[7][gd.lang] << ": " << gd.N << "\n";
	std::cout << " " << menu_des[8][gd.lang] << ": " << gd.M << "\n";
	std::cout << " " << menu_des[9][gd.lang] << ":  ";
	std::cout << " " << menu_des[10][gd.lang] << "\n";
	std::cout << " " << menu_des[12][gd.lang] << ":  ";
	switch (gd.computer_starts)
	{
		case 0: std::cout << "" << menu_des[13][gd.lang] << "\n"; break;
		case 1: std::cout << "" << menu_des[14][gd.lang] << "\n"; break;
	}
	std::cout << " " << menu_des[15][gd.lang] << ":  ";
	switch (gd.clear_every_move)
	{
		case 0: std::cout << "" << menu_des[16][gd.lang] << "\n"; break;
		case 1: std::cout << "" << menu_des[17][gd.lang] << "\n"; break;
	}
	std::cout << " \t === " << menu_des[18][gd.lang] << ": (1-4) ===\n\n";
}

void menu3() {
	char choice;
	prev_menu = 3;
	do {
		system("cls");
		menu3_4a();
		std::cout << "\t" << std::left << std::setw(40) << "(1) " + menu_pos[6][gd.lang] << "(2) " << menu_pos[7][gd.lang] << "\n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(3) " + menu_pos[8][gd.lang] << "(4) " << menu_pos[9][gd.lang] << "\n\n";
		std::cout << "\t ? "; std::cin >> choice;
	} while (choice != '1' && choice != '2' && choice != '3' && choice != '4');
	switch (choice)
	{
		case '1': menu_choice = 10; break;
		case '2': menu_choice = 4; break;
		case '3': menu_choice = 14; break;
		case '4': menu_choice = 15; break;
	}
}

void menu4() {
	char choice;
	prev_menu = 4;
	do {
		system("cls");
		std::cout << " \t\t === " << menu_des[19][gd.lang] << " ===\n\n";
		menu3_4a();;
		std::cout << "\t" << std::left << std::setw(40) << "(1) " + menu_pos[10][gd.lang] << "(2) " << menu_pos[11][gd.lang] << "\n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(3) " + menu_pos[12][gd.lang] << "(4) " << menu_pos[13][gd.lang] << "\n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(5) " + menu_pos[14][gd.lang] << "(6) " << menu_pos[15][gd.lang] << "\n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(7) " + menu_pos[16][gd.lang] << "(8) " << menu_pos[17][gd.lang] << "\n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(9) " + menu_pos[18][gd.lang] << "\n\n";
		std::cout << "\t ? "; std::cin >> choice;
	} while (int(choice) < 49 || int(choice) > 57);
	switch (choice)
	{
		case '1': menu_choice = 2; break;
		case '2': menu_choice = 10; break;
		case '3': menu_choice = 5; break;
		case '4': menu_choice = 6; break;
		case '5': menu_choice = 7; break;
		case '6': menu_choice = 8; break;
		case '7': menu_choice = 9; break;
		case '8': menu_choice = 14; break;
		case '9': menu_choice = 15; break;
	}
}

void menu5() {
	char choice;
	int maks_il_z = min(min(gd.N, gd.M), K_MAX);
	do {
		system("cls");
		if (min(gd.N, gd.M) < K_MAX)
			std::cout << "" << menu_des[20][gd.lang] << " " << K_MAX << ")" << menu_des[21][gd.lang] << " " << maks_il_z << ".\n";
		std::cout << "\n\t " << menu_des[22][gd.lang] << " (" << K_MIN << "-" << maks_il_z << "): ";
		std::cin >> choice;
	} while (std::to_string(choice).empty() || int(choice) < 51 || int(choice) > (48 + maks_il_z));
	gd.K = int(choice) - 48;
	menu_choice = prev_menu;
}

void menu6() {
	int size;
	unsigned int prev_N = gd.N;
	unsigned int prev_M = gd.M;
	int min_szer = max(gd.K, WIDTH_MIN);
	int min_wys = max(gd.K, HEIGHT_MIN);
	do {
		system("cls");
		if (gd.K > WIDTH_MIN)
		{
			std::cout << "" << menu_des[23][gd.lang] << " " << gd.K << " " << menu_des[24][gd.lang] << " " << gd.K << ".\n";
			std::cout << "" << menu_des[25][gd.lang] << " " << gd.K << ", " << menu_des[26][gd.lang] << ".";
		}
		std::cout << "\n\t " << menu_des[27][gd.lang] << " (" << min_szer << "-" << WIDTH_MAX << "): "; // 
		std::cout << "\n";
	} while (read_int(size, min_szer, WIDTH_MAX));
	if (size == 0) { menu_choice = 5; prev_menu = 6; return; }
	gd.M = size;
	do {
		if (gd.K > HEIGHT_MIN) {
			std::cout << "" << menu_des[28][gd.lang] << " " << gd.K << " " << menu_des[29][gd.lang] << " " << gd.K << ".\n";
			std::cout << "" << menu_des[30][gd.lang] << " " << gd.K << ", " << menu_des[31][gd.lang] << ".";
		}
		std::cout << "\n\t " << menu_des[32][gd.lang] << " (" << min_wys << "-" << HEIGHT_MAX << "): "; // 
		std::cout << std::endl;
	} while (read_int(size, min_wys, HEIGHT_MAX));
	if (size == 0) { menu_choice = 5; prev_menu = 6; return; }
	gd.N = size;
	//delete previous board
	for (unsigned i = 0; i < prev_N; i++)
		delete[] board[i];
	delete[] board;
	board = NULL;
	//create board
	init1();
	menu_choice = prev_menu;
}

void menu7() {
	char choice;
	do {
		system("cls");
		std::cout << "\n \t === " << menu_des[33][gd.lang] << ": ===\n\n";
		std::cout << "\t " << Sign_A << ": (" << Sign_a << ") \t:\t " << Sign_B << " (" << Sign_b << ") \n\n";
		std::cout << "\t " << menu_des[34][gd.lang] << ": "; std::cin >> choice;
	} while (choice != Sign_A && choice != Sign_a && choice != Sign_B && choice != Sign_b);
	switch (choice)
	{
		case Sign_A:
		case Sign_a:	gd.human_sgn = Sign_A; gd.last_human = Sign_a;
			gd.comp_sgn = Sign_B; gd.last_comp = Sign_b; break;
		case Sign_B:
		case Sign_b:	gd.human_sgn = Sign_B; gd.last_human = Sign_b;
			gd.comp_sgn = Sign_A; gd.last_comp = Sign_a; break;
	}
	menu_choice = prev_menu;
}

void menu8() {
	char choice;
	do {
		system("cls");
		std::cout << "\n \t === " << menu_des[35][gd.lang] << ": ===\n\n";
		std::cout << "\t " << menu_des[36][gd.lang] << ":  (" << menu_des[54][gd.lang] << ") \t:\t " << menu_des[37][gd.lang] << ":  (k) \n\n";
		std::cout << "\t ? "; std::cin >> choice;
	} while (choice != 'T' && choice != 't' && choice != 'Y' && choice != 'y' && choice != 'K' && choice != 'k');
	switch (choice)
	{
		case 'Y':
		case 'y':
		case 'T':
		case 't':	gd.computer_starts = 0; break;
		case 'K':
		case 'k':	gd.computer_starts = 1; break;
	}
	menu_choice = prev_menu;
}

void menu9() {
	char choice;
	do {
		system("cls");
		std::cout << "\n \t === " << menu_des[38][gd.lang] << ": ===\n\n";
		std::cout << "\t " << menu_des[39][gd.lang] << ":  (" << menu_des[54][gd.lang] << ") \t:\t " << menu_des[40][gd.lang] << ":  (n) \n\n";
		std::cout << "\t ? "; std::cin >> choice;
	} while (choice != 'T' && choice != 't' && choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');
	switch (choice)
	{
		case 'Y':
		case 'y':
		case 'T':
		case 't':	gd.clear_every_move = 0; break;
		case 'N':
		case 'n':	gd.clear_every_move = 1; break;
	}
	menu_choice = prev_menu;
}

void menu10() {
	if (prev_menu != 10)
	{
		gd.free_fields = gd.fields;
		gd.winner = 'O';
		for (unsigned i = 0; i < gd.N; i++)
			for (unsigned j = 0; j < gd.M; j++)
				board[i][j] = char(32);
		prev_menu = 10;
	}
	move();
}

void menu11() {
	char choice;
	do {
		system("cls");
		std::cout << "\n \t === " << menu_des[41][gd.lang] << ": ===\n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(1) " + menu_pos[19][gd.lang] << "(2) " << menu_pos[20][gd.lang] << "\t:\t (3) " << menu_pos[21][gd.lang] << "\n\n";
		std::cout << "\t ? "; std::cin >> choice;
	} while (choice != '1' && choice != '2' && choice != '3');
	switch (choice)
	{
		case '1': menu_choice = 15; break;
		case '2': menu_choice = 12; break;
		case '3': menu_choice = prev_menu; break;
	}
}

void menu12() {
	char choice;
	prev_menu = 12;
	do {
		system("cls");
		std::cout << " \t === " << menu_des[42][gd.lang] << ": (1-5) ===\n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(1) " + menu_pos[22][gd.lang] << "(2) " << menu_pos[23][gd.lang] << "\n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(3) " + menu_pos[24][gd.lang] << "(4) " << menu_pos[25][gd.lang] << "\n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(5) " + menu_pos[26][gd.lang] << "\n\n";
		std::cout << "\t ? "; std::cin >> choice;
	} while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5');
	switch (choice)
	{
		case '1': menu_choice = 10; break;
		case '2': menu_choice = 4; break;
		case '3': menu_choice = 3; break;
		case '4': menu_choice = 14; break;
		case '5': menu_choice = 15; break;
	}
}

void menu13() {
	char choice;
	do {
		system("cls");
		std::cout << "\n \t === " << menu_des[43][gd.lang] << " ===\n\n";
		std::cout << "\n \t === " << menu_des[44][gd.lang] << ": (1-2) ===\n\n";
		std::cout << "\t" << std::left << std::setw(40) << "(1) " + menu_pos[27][gd.lang] << "(2) " << menu_pos[28][gd.lang] << "\n\n";
		std::cout << "\t ? "; std::cin >> choice;
	} while (choice != '1' && choice != '2');
	switch (choice)
	{
		case '1': menu_choice = 12; break;
		case '2': menu_choice = 15; break;
	}
}

void menu14() {
	system("cls");
	std::cout << "\t === OPIS GRY/GAME DESCRIPTION: ===\n\n";
	std::cout << "KOLKO I KRZYZYK / TIC TAC TOE GAME\n\n";
	std::cout << "\t ENGLISH:\n\n";
	//game description in english
	std::cout <<
		"Two players (you and computer) are marking the fields with their signs.\n";
	std::cout <<
		"The winner is a player who makes n signs in line (default is 3, you can change this in settings)." <<
		"This game is parameterized - you can change board size (row and column count may be different - NxM)\n";
	std::cout <<
		"Computer marks fields randomly. I also made version with AI, but this is not published here (available for recruiter's demand only).\n";
	std::cout <<
		"My version of AI doesn't use neither MinMax method nor neural networks.\n";
	std::cout <<
		"It is based on my algorithm idea, so you can play with much bigger boards due to its speed.\n";
	std::cout <<
		"On bigger boards you can't use e.g. MinMax due to its computional complexity.\n";
	std::cout <<
		"The AI plays smart, especially on big boards but not perfect (it needs some modifications yet to become invincible).\n\n";

	//game description in polish 
	std::cout << "\t POLSKI/POLISH:\n\n";
	std::cout <<
		"Gra polega na naprzemiennym stawianiu swoich znakow na planszy przez dwoch graczy (tu: gracz i komputer).\n";
	std::cout <<
		"Wygrywa ten gracz, ktory pierwszy ustawi wyznaczona liczbe K sasiednich swoich znakow w jednej linii w jednym " <<
		"z czterech kierunkow - poziomo, pionowo lub ukosnie.\n";
	std::cout <<
		"Ostatnio postawiony przez danego gracza znak mozna poznac po tym, ze ma mniejsza wielkosc od pozostalych, wczesniejszych znakow.\n";
	std::cout <<
		"Napisalem rowniez wersje z AI, jednak nie jest ona opublikowana - jest dostepna wylacznie na zadanie rekruterow.\n";
	std::cout <<
		"AI nie uzywa standardowych rozwiazan jak np. metode min-max lub sieci neuronowych. Jest oparte na moim wlasnym algorytmie.\n";
	std::cout <<
		"Dzieki temu AI jest szybkie i mozna z nia grac na duzych planszach (zlozonosc obliczeniowa innych algorytmow na to nie pozwala).\n";
	std::cout <<
		"Gra inteligentnie, nie perfekcyjnie - co zwlaszacza widac na duzych planszach (byc moze uda sie osiagnac\n";
	std::cout <<
		"idealnie grajace AI po pewnych modyfikacjach).\n\n";
	menu_choice = prev_menu;
	std::cin.ignore();
	std::cin.get();
}

void menu15()
{
	if (board)
	{
		for (unsigned i = 0; i < gd.N; i++)
			delete[] board[i];
		delete[] board;
	}
}

//===== OTHER FUNCTIONS =====

void choose_field_desc()
{
	std::cout << " " << menu_des[45][gd.lang] << "\n";
}

void init0()
{
	gd.K = K_MIN; gd.M = WIDTH_MIN; gd.N = HEIGHT_MIN; gd.lang = 1;
	gd.human_sgn = Sign_B;
	gd.computer_starts = 0; 
	gd.clear_every_move = 0;
	srand(static_cast<unsigned>(time(NULL)));
}

 
void init1()
{
	if (gd.human_sgn == Sign_A) { gd.last_human = Sign_a; gd.comp_sgn = Sign_B; gd.last_comp = Sign_b; }
	else { gd.last_human = Sign_b; gd.comp_sgn = Sign_A; gd.last_comp = Sign_a; }
	gd.fields = gd.M * gd.N;
	gd.free_fields = gd.fields;
	gd.winner = 'O';
	board = new char* [gd.N];
	for (unsigned i = 0; i < gd.N; i++)
	{
		board[i] = new char[gd.M];
	}
	for (unsigned i = 0; i < gd.N; i++)
		for (unsigned j = 0; j < gd.M; j++)
			board[i][j] = char(32);
}

void search_field(Point& pk) {
	//here you can include your own code that choose an empty field for computer
	//an empty field is choosen in the simplest way (randomly) 
	pk.row = (-1);  pk.col = (-1);
	Point p;
	unsigned int N = gd.N, M = gd.M;
	unsigned licz = 0; // 
	for (unsigned k = 0; k < gd.fields; k++) {
		while (field_occupied(k) && k < gd.fields)
		{
			k++;
			if (k >= gd.fields) return;
		}
		p.row = k / M;   p.col = k % M;
		if (pk.row < 0) pk = p;
		licz++;
		pk = draw_field(licz, pk, p);
	}
}

void move()
{
	char wybor = 'n';
	Point pc, pk;
	Point last_pc(-1, -1), last_pk(-1, -1);
	if (gd.free_fields == gd.fields && gd.computer_starts)
	{
		search_field(pk); put_sign(gd.comp_sgn, pk); gd.free_fields--; last_pk = pk;
	}
	print_board();
	while (gd.free_fields > 0 && (gd.winner == 'O' || gd.winner == 'R')) {
		//human move
		choose_field_desc();
		int i, j;
		do {
			while (read_row(i)) { ; }
			if (i == 0) { menu_choice = 11; return; } 
			i--;
			pc.row = i;
			while (read_col(j)) { ; } //
			if (j == 0) { menu_choice = 11; return; }
			j--;
			pc.col = j;
			if (field_occupied(i * gd.M + j))
			{ 
				std::cout << menu_des[48][gd.lang];
			}
		} while (field_occupied(i * gd.M + j));
		if (last_pc.row >= 0 && last_pc.col >= 0)
		{
			put_sign(gd.human_sgn, last_pc);
			put_sign(gd.last_human, pc);
		}
		else put_sign(gd.human_sgn, pc);
		last_pc = pc;
		gd.free_fields--;
		if (gd.winner == 'O' && check_win(gd.human_sgn, pc)) gd.winner = 'C';
		else if (gd.winner == 'O' && gd.free_fields == 0) gd.winner = 'R';

		//computer move
		if (gd.free_fields > 0 && (gd.winner == 'O' || gd.winner == 'R'))
		{
			search_field(pk);
			if (last_pk.row >= 0 && last_pk.col >= 0)
			{
				put_sign(gd.comp_sgn, last_pk);
				put_sign(gd.last_comp, pk);
			}
			else put_sign(gd.comp_sgn, pk);
			last_pk = pk;
			gd.free_fields--;
			if (gd.winner == 'O' && check_win(gd.comp_sgn, pk)) gd.winner = 'K';
			else if (gd.winner == 'O' && gd.free_fields == 0) gd.winner = 'R';
		}
		if (gd.clear_every_move) system("cls");
		print_board();
		if (gd.winner != 'O') {
			switch (gd.winner)
			{
				case 'K': std::cout << "" << menu_des[49][gd.lang] << "\n"; break;
				case 'C': std::cout << "" << menu_des[50][gd.lang] << "\n"; break;
				case 'R': if (gd.free_fields == 0)
				{
					std::cout << "" << menu_des[51][gd.lang] << "\n";
				}
					else
				{
					std::cout << "" << menu_des[52][gd.lang] << "\n";
				}
					break;
			}
			std::cout << "" << menu_des[53][gd.lang] << ""; std::cin >> wybor;
		}
		if (wybor == '0' && gd.winner == 'R' && gd.free_fields > 0)
		{
			menu_choice = 11;
			break;
		}
	}
	menu_choice = 13;
}

int check_game_result(char gracz, Point p, Point krok)
{
	unsigned how_many_signs_in_frame = 0;
	char last_player;
	if (gracz == gd.human_sgn) last_player = gd.last_human;
	else last_player = gd.last_comp;
	for (unsigned m = 0; m < gd.K; m++) {
		if (field_char(p) == gracz || field_char(p) == last_player)
		{
			how_many_signs_in_frame++; p = p + krok;
		}
		else return 0;
	}
	return 1;
}

int check_direction(char player, Point p0, Point p1, Point krok)
{
	unsigned int start, end;
	Point p = p0;
	if (p1.row < 0 || p1.col < 0 || p1.col >= gd.M) return 0;
	if (krok.row == 0) { start = p0.col; end = p1.col; }
	else { start = p0.row; end = p1.row; }
	for (unsigned licz = start; licz <= end; licz++) {
		if (check_game_result(player, p, krok)) return 1;
		if (licz < end)
			p = p + krok;
	}
	return 0;
}

int check_win(char player, Point p) {
	Point p0, p1, step;
	unsigned I, J, M, N, K;  //I-row, J-column 
	I = p.row;  J = p.col; M = gd.M; N = gd.N, K = gd.K;
	//horizontal (to the right):
	p0.col = max(0, J - K + 1);  p0.row = I;
	p1.col = min(M - gd.K, J);  p1.row = I;
	step.row = 0;  step.col = 1; //next field to the right
	if (check_direction(player, p0, p1, step)) return 1; //player win
	//vertically (down): 
	p0.row = max(0, I - K + 1);  p0.col = J;
	p1.row = min(N - K, I);  p1.col = J;
	step.row = 1;  step.col = 0; //next field - down
	if (check_direction(player, p0, p1, step)) return 1; //player win
	//skew right-to-down:
	p0.row = I - min(min(I, J), K - 1);  p0.col = J - min(min(I, J), K - 1);
	p1.row = min(min(N, M + I - J), I + K) - K;  p1.col = min(min(M, N + J - I), J + K) - K;
	step.row = 1;  step.col = 1; //next field - right and down
	if (check_direction(player, p0, p1, step)) return 1; //player win
	//skew left-to-down:
	p0.row = I - min(min(K - 1, I), M - 1 - J);  p0.col = J + min(min(K - 1, I), M - 1 - J);
	p1.row = I + min(min(0, N - I - K), J - K + 1);  p1.col = J - min(min(0, N - I - K), J - K + 1);
	step.row = 1;  step.col = (-1); //next field - left and down
	if (check_direction(player, p0, p1, step)) return 1; //player win
	return 0;
}

void print_board()
{
	unsigned N = gd.N, M = gd.M;

	//column numeration
	std::cout << char(32) << char(32) << char(32) << char(32) << char(32);
	for (int j = 1; j <= M; j++) { std::cout << char(32) << ck1(j) << ck0(j) << char(32); } std::cout << std::endl;

	//top horizontal line
	std::cout << char(32) << char(32) << char(32) << char(32) << char(197);
	for (int j = 1; j < M; j++) { std::cout << char(196) << char(196) << char(196) << char(197); } //subsequent columns
	std::cout << char(196) << char(196) << char(196) << char(180) << std::endl; //last column

	//rows
	for (int i = 0; i < N - 1; i++)
	{
		//lines with players's signs
		std::cout << char(32) << c1(i + 1) << c0(i + 1) << char(32) << char(179);
		for (int j = 0; j < M - 1; j++) { std::cout << char(32) << board[i][j] << char(32) << char(179); }
		std::cout << char(32) << board[i][M - 1] << char(32) << char(179) << std::endl; //last column
		//middle horizontal line
		std::cout << char(32) << char(32) << char(32) << char(32) << char(197);
		for (int j = 0; j < M - 1; j++) { std::cout << char(196) << char(196) << char(196) << char(197); }
		std::cout << char(196) << char(196) << char(196) << char(180) << std::endl; //last column
	}
	//last row
	std::cout << char(32) << c1(N) << c0(N) << char(32) << char(179);
	for (int j = 0; j < M - 1; j++) { std::cout << char(32) << board[N - 1][j] << char(32) << char(179); }
	std::cout << char(32) << board[N - 1][M - 1] << char(32) << char(179) << std::endl; //last col
	//last horizontal line
	std::cout << char(32) << char(32) << char(32) << char(32) << char(193);
	for (int j = 1; j < M; j++) { std::cout << char(196) << char(196) << char(196) << char(193); }
	std::cout << char(196) << char(196) << char(196) << char(217) << std::endl; //last column
	std::cout << std::endl;
}

char c1(int k)
{
	if (k / 10 == 0) return char(32);
	else return char(48 + (k / 10));
}

char c0(int k)
{
	return char(48 + (k % 10));
}

char ck1(int k)
{
	if (k / 10 == 0) return char(48 + k % 10);
	else return char(48 + k / 10);
}

char ck0(int k)
{
	if (k / 10 == 0) return char(32);
	else return char(48 + k % 10);
}

long int max(long int a, long int b)
{
	return (a > b) ? a : b;
}

long int min(long int a, long int b)
{
	return (a < b) ? a : b;
}

char field_char(Point p)
{
	return board[p.row][p.col];
}

void put_sign(char z, Point p)
{
	board[p.row][p.col] = z;
}

int field_occupied(unsigned k)
{
	unsigned I, J;
	I = k / gd.M;  J = k % gd.M;
	if (board[I][J] == ' ') return 0; 
	else return 1; 
}

bool read_int(int& liczba, int min, int max, int min2, int max2)
{
	std::cin >> liczba;
	if ((liczba >= min && liczba <= max) || (liczba >= min2 && liczba <= max2)) return 0;
	return 1;
}

bool read_row(int& i)
{			 
	std::cout << " " << menu_des[46][gd.lang] << ", min " << 1 << ", max " << gd.N << "): ";
	return read_int(i, 0, gd.N);
}

bool read_col(int& j)
{
	std::cout << " " << menu_des[47][gd.lang] << ", min " << 1 << ", max " << gd.M << "): ";
	return read_int(j, 0, gd.M);
}

Point draw_field(unsigned how_many, Point ppop, Point pk)
{
	if (((rand() % 10000) / 10000.0) < (1.0 / how_many)) return pk;
	else return ppop;
}
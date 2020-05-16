#include "lang.hpp"
#include "ttt.hpp"

void FillDescriptionArray()
{
	//==== MENU POSITION ARRAY (polish/english) =========

	//menu 1  
	menu_pos[0][0] = "ZMIEN JEZYK / CHANGE LANGUAGE"; //polish (0) 
	menu_pos[0][1] = "CHANGE LANGUAGE"; //english (1) 
	//pm[0][2] = "BIENVENIDOS"; //another language as the second dimension value + 1 (but remember to change LANG_DIM in ttt.hpp when adding new language)
	menu_pos[1][0] = "USTAWIENIA";
	menu_pos[1][1] = "SETTINGS";
	menu_pos[2][0] = "OPIS GRY";
	menu_pos[2][1] = "GAME DESCRIPTION";
	menu_pos[3][0] = "KONIEC";
	menu_pos[3][1] = "EXIT";

	//menu 2
	menu_pos[4][0] = "ENGLISH / ANGIELSKI";
	menu_pos[4][1] = "ANGIELSKI / ENGLISH";
	menu_pos[5][0] = "POLISH / POLSKI";
	menu_pos[5][1] = "POLSKI / POLISH";

	//menu 3
	menu_pos[6][0] = "GRAJ Z BIEZACYMI USTAWIENIAMI";
	menu_pos[6][1] = "PLAY WITH CURRENT SETTINGS";
	menu_pos[7][0] = "ZMIEN USTAWIENIA";
	menu_pos[7][1] = "CHANGE SETTINGS";
	menu_pos[8][0] = "OPIS GRY";
	menu_pos[8][1] = "GAME DESCRIPTION";
	menu_pos[9][0] = "KONIEC";
	menu_pos[9][1] = "END";

	//menu 4
	menu_pos[10][0] = "ZMIEN JEZYK / CHANGE LANGUAGE";
	menu_pos[10][1] = "CHANGE LANGUAGE";
	menu_pos[11][0] = "GRAJ Z BIEZACYMI USTAWIENIAMI";
	menu_pos[11][1] = "PLAY WITH CURRENT SETTINGS";
	menu_pos[12][0] = "ILE ZNAKOW WYGRYWA";
	menu_pos[12][1] = "HOW MANY SIGNS WIN";
	menu_pos[13][0] = "ROZMIAR PLANSZY";
	menu_pos[13][1] = "SIZE OF THE BOARD";
	menu_pos[14][0] = "WYBIERZ SWOJ ZNAK";
	menu_pos[14][1] = "CHOOSE YOUR SIGN";
	menu_pos[15][0] = "KTO ZACZYNA GRE";
	menu_pos[15][1] = "WHO STARTS A GAME";
	menu_pos[16][0] = "CZY PAMIETAC POPRZEDNIE RUCHY?";
	menu_pos[16][1] = "REMEMBER PREVIOUS MOVES?";
	menu_pos[17][0] = "OPIS GRY";
	menu_pos[17][1] = "GAME DESCRIPTION";
	menu_pos[18][0] = "KONIEC";
	menu_pos[18][1] = "END";

	//menu 5
	//no positions needed

	//menu 6
	//no positions needed

	//menu 7
	//no positions needed

	//menu 8
	//no positions needed

	//menu 9
	//no positions needed

	//menu 10
	//no positions needed

	//menu 11
	menu_pos[19][0] = "KONIEC";
	menu_pos[19][1] = "END";
	menu_pos[20][0] = "NOWA ROZGRYWKA";
	menu_pos[20][1] = "NEW MATCH";
	menu_pos[21][0] = "POWROT DO PRZERWANEJ GRY";
	menu_pos[21][1] = "RETURN TO INTERRUPTED MATCH";

	//menu 12
	menu_pos[22][0] = "GRAJ Z BIEZACYMI USTAWIENIAMI";
	menu_pos[22][1] = "PLAY WITH CURRENT SETTINGS";
	menu_pos[23][0] = "ZMIEN USTAWIENIA";
	menu_pos[23][1] = "CHANGE SETTINGS";
	menu_pos[24][0] = "POKAZ BIEZACE USTAWIENIA";
	menu_pos[24][1] = "SHOW CURRENT SETTINGS";
	menu_pos[25][0] = "OPIS GRY";
	menu_pos[25][1] = "GAME DESCRIPTION";
	menu_pos[26][0] = "KONIEC";
	menu_pos[26][1] = "END";

	//menu 13
	menu_pos[27][0] = "NOWA ROZGRYWKA";
	menu_pos[27][1] = "NEW MATCH";
	menu_pos[28][0] = "KONIEC";
	menu_pos[28][1] = "END";

	/*Adding new menu position (text to copy):

	menuPos[][0] = "";
	menuPos[][1] = "";

	Remember to change MENU_POSITION_DIM in ttt.hpp */
	
	//==== MENU DESCRIPTION ARRAY (polish/english) =========
	
	//menu 1
	menu_des[0][0] = "KOLKO I KRZYZYK";
	menu_des[0][1] = "TIC TAC TOE GAME";
	menu_des[1][0] = "jezyk/language : polski/polish";
	menu_des[1][1] = "language : english";
	menu_des[2][0] = "WYBIERZ";
	menu_des[2][1] = "CHOOSE";
	//menu 2
	menu_des[3][0] = "jezyk/language : polski/polish";
	menu_des[3][1] = "language/jezyk : english/angielski";
	menu_des[4][0] = "WYBIERZ JEZYK / CHOOSE LANGUAGE";
	menu_des[4][1] = "CHOOSE LANGUAGE";
	//menu 3
	menu_des[5][0] = "BIEZACE USTAWIENIA";
	menu_des[5][1] = "CURRENT SETTINGS";
	menu_des[6][0] = "ilosc znakow potrzebnych do wygranej";
	menu_des[6][1] = "number of signes needed to win";
	menu_des[7][0] = "ile wierszy (pionowo)";
	menu_des[7][1] = "how many rows (vertically)";
	menu_des[8][0] = "ile kolumn (poziomo)";
	menu_des[8][1] = "how many columns (horizontally)";
	menu_des[9][0] = "language";
	menu_des[9][1] = "jezyk/language";
	menu_des[10][0] = "polski/polish";
	menu_des[10][1] = "english";
	menu_des[11][0] = "angielski/english";
	menu_des[11][1] = "english/angielski";
	menu_des[12][0] = "kto zaczyna gre";
	menu_des[12][1] = "who starts a game";
	menu_des[13][0] = "Ty";
	menu_des[13][1] = "You";
	menu_des[14][0] = "komputer";
	menu_des[14][1] = "computer";
	menu_des[15][0] = "pamietac poprzednie plansze na ekranie po kazdym ruchu?";
	menu_des[15][1] = "remember previous boards after every step?";
	menu_des[16][0] = "TAK";
	menu_des[16][1] = "YES";
	menu_des[17][0] = "NIE";
	menu_des[17][1] = "NO";
	menu_des[18][0] = "WYBIERZ";
	menu_des[18][1] = "CHOOSE";

	//menu 4
	menu_des[19][0] = "ZMIEN USTAWIENIA";
	menu_des[19][1] = "CHANGE SETTINGS";

	//menu 5
	menu_des[20][0] = "Mala plansza (liczba wierszy lub kolumn mniejsza od";
	menu_des[20][1] = "Small board (number of rows or of columns less than";
	menu_des[21][0] = "ogranicza ilosc znakow do";
	menu_des[21][1] = "reduces number of signes to";
	menu_des[22][0] = "podaj ilosc znakow";
	menu_des[22][1] = "set number of signes";

	//menu 6
	menu_des[23][0] = "Wymagana ilosc znakow rowna";
	menu_des[23][1] = "number of signes needed to win with the value";
	menu_des[24][0] = "ogranicza minimalna szerokosc do";
	menu_des[24][1] = "reduces minimal width to";
	menu_des[25][0] = "Jesli chcesz wybrac szerokosc mniejsza niz";
	menu_des[25][1] = "If you want to choose the width less then";
	menu_des[26][0] = "wczesniej zmniejsz wymagana ilosc znakow";
	menu_des[26][1] = "first reduce number of signes needed to win";
	menu_des[27][0] = "podaj szerokosc planszy";
	menu_des[27][1] = "set the width of a board";
	menu_des[28][0] = "Wymagana ilosc znakow rowna";
	menu_des[28][1] = "number of signs needed to win with the value";
	menu_des[29][0] = "ogranicza minimalna wysokosc do";
	menu_des[29][1] = "reduces minimal height to";
	menu_des[30][0] = "Jesli chcesz wybrac wysokosc mniejsza niz";
	menu_des[30][1] = "If you want to choose the height less then";
	menu_des[31][0] = "najpierw zmniejsz wymagana ilosc znakow";
	menu_des[31][1] = "first reduce number of signs needed to win";
	menu_des[32][0] = "podaj wysokosc planszy";
	menu_des[32][1] = "set the height of the board";

	//menu 7
	menu_des[33][0] = "WYBIERZ SWOJ ZNAK";
	menu_des[33][1] = "CHOOSE YOUR SIGN";
	menu_des[34][0] = "Twoj znak";
	menu_des[34][1] = "Your sign";

	//menu 8
	menu_des[35][0] = "KTO ZACZYNA GRE";
	menu_des[35][1] = "WHO STARTS A GAME";
	menu_des[36][0] = "Ty";
	menu_des[36][1] = "You";
	menu_des[37][0] = "komputer";
	menu_des[37][1] = "computer";

	//menu 9
	menu_des[38][0] = "CZY PAMIETAC POPRZEDNIE RUCHY";
	menu_des[38][1] = "REMEMBER PREVIOUS MOVES?";
	menu_des[39][0] = "Tak";
	menu_des[39][1] = "Yes";
	menu_des[40][0] = "Nie";
	menu_des[40][1] = "No";

	//menu 10
	//no description needed

	//menu 11
	menu_des[41][0] = "GRA PRZERWANA";
	menu_des[41][1] = "GAME INTERRUPTED";

	//menu 12
	menu_des[42][0] = "WYBIERZ";
	menu_des[42][1] = "CHOOSE";

	//menu 13
	menu_des[43][0] = "ROZGRYWKA ZAKONCZONA";
	menu_des[43][1] = "CURRENT MATCH FINISHED";
	menu_des[44][0] = "WYBIERZ";
	menu_des[44][1] = "CHOOSE";

	//choose_field_des():
	menu_des[45][0] = "WYBIERZ POLE (wpisanie zera '0' przerywa gre)";
	menu_des[45][1] = "CHOOSE A FIELD (0 interrupts the match)";


	//additional descriptions:

	//read_row():
	menu_des[46][0] = "WIERSZ (pionowo";
	menu_des[46][1] = "ROW (vertically";

	//read_col():
	menu_des[47][0] = "KOLUMNA (poziomo";
	menu_des[47][1] = "COLUMN (horizontally";

	//move():
	menu_des[48][0] = "Pole zajete!";
	menu_des[48][1] = "Nonempty field!";
	menu_des[49][0] = "Wygralem. Powodzenia w nastepnej grze.";
	menu_des[49][1] = "I won! Good luck next time.";
	menu_des[50][0] = "WYGRALES! Gratuluje!";
	menu_des[50][1] = "YOU WON! Congratulations (how is that possible?!)";
	menu_des[51][0] = "Koniec gry - brak wolnych pol. REMIS!";
	menu_des[51][1] = "No more empty fields - it's a tie";
	menu_des[52][0] = "REMIS. Mozesz sprawdzic grajac dalej (lub przerwac gre wpisujac 0).";
	menu_des[52][1] = "It's a tie. You can ignore it and just play to the end (or terminate by pressing '0')";
	menu_des[53][0] = "Nacisnij dowolny klawisz (i Enter)";
	menu_des[53][1] = "Press any key";

	//confirmation - y (english), t (polish)
	menu_des[54][0] = "t";
	menu_des[54][1] = "y";

	/*Adding new menu position (text to copy):

	menuDes[][0] = "";
	menuDes[][1] = "";

	Remember to change MENU_DESCRIPTION_DIM in ttt.hpp */
}
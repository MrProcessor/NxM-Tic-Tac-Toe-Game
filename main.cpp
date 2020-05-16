//Author: Dominik Mrowiec 
//GitHub: https://github.com/mrprocessor

#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <iomanip>
#include "ttt.hpp"
#include "lang.hpp"

int main()
{
	init0();
	FillDescriptionArray();
	std::cout << menu_des[0][gd.lang];
	init1();
	menu_choice = 1;
	prev_menu = 1;
	while (1)
	{
		switch (menu_choice)
		{
			case 1: menu1(); break; //menu startowe (poczatkowe) 
			case 2: menu2(); break; //wybor jezyka
			case 3: menu3(); break; //pokaz biezace ustawienia gry
			case 4: menu4(); break; //zmien ustawienia gry
			case 5: menu5(); break; //ile trzeba kolejnych znakow wlasnych w linii do wygranej
			case 6: menu6(); break; //okresl rozmiar planszy
			case 7: menu7(); break; //wybor znaku gracza (czlowieka) 
			case 8: menu8(); break; //kto zaczyna gre
			case 9: menu9(); break; //czy pamietac poprzednie ruchy 
			case 10: menu10(); break; //graj 	 
			case 11: menu11(); break; //przerwij biezaca rozgrywke
			case 12: menu12(); break; //nowa rozgrywka
			case 13: menu13(); break; //rozgrywka zakonczona
			case 14: menu14(); break; //opis gry
			case 15: menu15(); return 0; //zakoncz program gry
		}
	}
}
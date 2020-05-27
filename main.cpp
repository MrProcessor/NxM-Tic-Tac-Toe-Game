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
			case 1: menu1(); break;
			case 2: menu2(); break;
			case 3: menu3(); break;
			case 4: menu4(); break;
			case 5: menu5(); break;
			case 6: menu6(); break;
			case 7: menu7(); break;
			case 8: menu8(); break;
			case 9: menu9(); break;
			case 10: menu10(); break; 
			case 11: menu11(); break;
			case 12: menu12(); break;
			case 13: menu13(); break;
			case 14: menu14(); break;
			case 15: menu15(); return 0;
		}
	}
}
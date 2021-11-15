/*#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>

template <typename T>
void countMenuSize(int& counter, T t)
{
	counter++;
}

template <typename T, typename ...Args>
void countMenuSize(int& counter, T t, Args... args)
{
	
	counter++;
	countMenuSize(counter, args...);
}

template <typename T>
void print(int &position, int &counter, T t)
{
	if (counter == position)
		std::cout << "=" << t << "=" << std::endl;
	else
		std::cout << " " << t << std::endl;
	counter++;
}

template <typename T, typename ...Args>
void print(int &position, int &counter,T t, Args ...arg)
{
	if (counter == position)
		std::cout << "=" << t << "=" << std::endl;
	else
		std::cout << " " << t << std::endl;
	counter++;
	print(position, counter, arg...);
}


int main()
{
	int current_position = 0, menu_size = 0, count = 0;

	countMenuSize(menu_size, "New Game", "Continue", "Settings","About", "Buy this game", "Exit");
	do
	{
		system("cls");
		count = 0;
		print(current_position, count, "New Game", "Continue", "Settings", "Buy this game", "About", "Exit");
		switch (_getch())
		{
		case 72:
			if (current_position > 0)
				current_position--;
			else
				current_position = menu_size - 1;
			break;
		case 80:
			if (current_position < menu_size - 1)

				current_position++;
			else
				current_position = 0;
			break;
			
		}
	} while (true);
}
*/
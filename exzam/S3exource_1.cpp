#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <vector>

/*template <typename T>
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
void print(int& position, int& counter, T t)
{
	if (counter == position)
		std::cout << "=" << t << "=" << std::endl;
	else
		std::cout << " " << t << std::endl;
	counter++;
}

template <typename T, typename ...Args>
void print(int& position, int& counter, T t, Args ...arg)
{
	if (counter == position)
		std::cout << "=" << t << "=" << std::endl;
	else
		std::cout << " " << t << std::endl;
	counter++;
	print(position, counter, arg...);
}*/
class Songs
{
public:
	std::string text;
	std::string name;
	std::string actor;
	std::string age;

	void addKL()
	{
		std::cin >> text;
		std::cout << "Введите название песни - ";
		std::cin >> name;
		std::cout << "Введите исполнителя - ";
		std::cin >> actor;
		std::cout << "Введите год выпуска - ";
		std::cin >> age;
		std::cout << "Песня добавлена...\n\n";
	}
	void addFL(std::string hou)
	{
		setlocale(LC_ALL, "rus");
		
		std::ifstream file(hou);
		if (!file)
		{
			std::cout << "Файл не открыт\n\n";
		}
		else
		{
			std::cout << "Все ОК! Файл открыт!\n\n";
		}
		while (file)
		{
			std::getline(file, text);
			std::cout << text << "\n";
		}
		std::cout << "Введите название песни - ";
		std::cin >> name;
		std::cout << "Введите исполнителя - ";
		std::cin >> actor;
		std::cout << "Введите год выпуска - ";
		std::cin >> age;
		std::cout << "Песня добавлена...\n\n";
	}
	
	void print(int a, std::string hou)
	{
		system("chcp 1251");
		if (a = 0)
		{	
			std::cout << text;
		}
		else
		{
			std::ifstream file(hou);
			while (file)
			{
				std::getline(file, text);
				std::cout << text << "\n";
			}
		}
		std::cout << "Название - " << name << "\n";
		std::cout << "Исполнитель: " << actor << "\n";
		std::cout << "Год - " << age << "\n";
	}
};
int main()
{
	system("chcp 1251");
	/*int current_position = 0, menu_size = 0, count = 0;
	countMenuSize(menu_size, "New Game", "Exit");
	do
	{
		system("cls");
		count = 0;
		print(current_position, count, "Новая игра", "Exit");
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
	} while (true);*/
	int size, choose, chase, a = 0, posit = 0;
	std::vector <Songs> songs;
	std::string hou;
	do
	{	
		system("pause");
		system("cls");
		std::cout << "1.Добавить\n2.Вывести\n";
		std::cin >> choose;
		switch (choose)
		{
		case 1:
		{
			posit = 1;
			std::cout << "Укажите сколько текстов вы хотите добавить.. \n";
			std::cin >> size;
			songs.resize(size);
			std::cout << "1.Из файла\n2.С клавиатуры\n3.Назад\n";
			std::cin >> chase;
			switch (chase)
			{
			case 1:
			{
				for (int i = 0; i < songs.size(); i++)
				{
					std::getline(std::cin, hou);
					a = 1;
					
					songs.at(i).addFL(hou);
				}
				break;
			}
			case 2:
			{
				for (int i = 0; i < songs.size(); i++)
					songs.at(i).addKL();
				break;
			}
			case 3:
			{
				std::cout << "Сколько текстов вы хотите добавить - \n";
				std::cin >> size;
				songs.resize(size);
				break;
			}
			default:
			{
				std::cout << "Не верно";
				break;
			}
			}
			break;
		}
		case 2:
		{
			if (posit == 0)
				std::cout << "Не добавлено ни одного текста..\n";
			else
				for (int i = 0; i < songs.size(); i++)
					songs.at(i).print(a, hou);
			break;
		}
		default:
		{
			std::cout << "Не верно";
			break;
		}
		}
	}while (choose != 0);
}



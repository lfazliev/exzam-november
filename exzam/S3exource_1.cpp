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
class songs
{
public:
	std::string text;
	std::string name;
	std::string actor;
	std::string age;

	void add()
	{
		int choose;
		do
		{
			std::cout << "1.С клавиатуры\n2.Из файла\n";
			std::cin >> choose;
			switch (choose)
			{
			case 2:
			{
				std::string hou;
				std::cout << "Укажите путь к файлу - ";
				std::cin.ignore();
				std::getline(std::cin, hou);
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
					std::cout << text << std::endl;
				}
				break;
			}
			case 1:
			{
				std::cin >> text;
				break;
			}
			default:
				std::cout << "error";
				break;
			}
			std::cout << "Введите название песни - ";
			std::cin >> name;
			std::cout << "\n";
			std::cout << "Введите исполнителя - ";
			std::cin >> actor;
			std::cout << "\n";
			std::cout << "Введите год выпуска - ";
			std::cin >> age;
			std::cout << "\n";
			std::cout << "Песня добавлена...\n";
			choose = 0;
		} while (choose != 0);
	}
	void print()
	{
		std::cout << text << "\n";
		std::cout << name << "\n";
		std::cout << actor << "\n";
		std::cout << age << std::endl;
	}
	void edit()
	{

	}
	void save()
	{
		
	}
	void findautor()
	{

	}
	void find()
	{

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
	int size, choose, posit = 0;
	std::vector <songs> songs;
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
			for (int i = 0; i < songs.size(); i++)
			{
				songs.at(i).add();
			}
			break;
		}
		case 2:
		{
			if (posit == 0)
				std::cout << "Не добавлено ни одного текста..\n";
			else
				for (int i = 0; i < songs.size(); i++)
					songs.at(i).print();
			break;
		}
		default:
		{
			std::cout << "Не верно";
			break;
		}
		}
	} while (choose != 0);
}



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
		std::cout << "Как вы хотите ввести текст песни\n1.С клавиатуры\n2.Взять из файла\n";
		std::cin >> text;
		std::cout << "Введите название песни - ";
		std::cin >> name;
		std::cout << "Введите исполнителя - ";
		std::cin >> actor;
		std::cout << "Введите год выпуска - ";
		std::cin >> age;
		std::cout << "Песня добавлена...\n\n";
	}
	void addFL()
	{
		setlocale(LC_ALL, "rus");
		std::ifstream file("Loug.txt");
		if (!file)
		{
			std::cout << "Файл не открыт\n\n";
		}
		else
		{
			std::cout << "Все ОК! Файл открыт!\n\n";
		}
		std::cout << "Введите название песни - ";
		std::cin >> name;
		std::cout << "Введите исполнителя - ";
		std::cin >> actor;
		std::cout << "Введите год выпуска - ";
		std::cin >> age;
		std::cout << "Песня добавлена...\n\n";
	}
	
	void print(int a)
	{
		if (a == true)
		{
			std::ifstream file("Loug.txt");
			{
				while (file)
				{

					std::string strIn;
					file >> strIn;
					std::cout << strIn << std::endl;
				}
			}
		}
		else
		{
			std::cout << text;
		}
		std::cout << name << "\n";
		std::cout << actor << "\n";
		std::cout << age << "\n";
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
	do
	{	
		system("pause");
		/*system("cls");*/
		std::cout << "1.Добавить\n2.Вывести\n";
		std::cin >> choose;
		switch (choose)
		{
		case 1:
		{
			adda = 1;
			std::cout << "Укажите сколько текстов вы хотите добавить.. \n";
			std::cin >> size;
			songs.resize(size);
			std::cout << "1.Из файла\n2.С клавиатуры\n";
			std::cin >> chase;
			switch (chase)
			{
			case 1:
			{
				for (int i = 0; i < songs.size(); i++)
				{
					a == true;
					songs.at(i).addFL();
				}
				break;
			}
			case 2:
			{
				for (int i = 0; i < songs.size(); i++)
					songs.at(i).addKL();
			}
			default:
			{
				std::cout << "Не верно";
				break;
			}
			}
		}
		case 2:
		{
			if (posit == 0)
				std::cout << "Не добавлено ни одного текста..";
			else
				for (int i = 0; i < songs.size(); i++)
					songs.at(i).print(a);
		}break;
		default:
		{
			std::cout << "Не верно";
			break;
		}
		}
	}while (choose != 0);
}



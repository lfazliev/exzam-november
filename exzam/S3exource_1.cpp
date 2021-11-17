#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <vector>
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



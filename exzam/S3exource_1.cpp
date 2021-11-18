#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <vector>
class songs
{
public:
	std::string text, text_sum;
	std::string name;
	std::string actor;
	std::string age;

	void add()
	{
		int choose;
		do
		{
			system("pause");
			system("cls");
			std::cout << "1.С клавиатуры\n2.Из файла\nКак вы хотите добавить текст песни? - ";
			std::cin >> choose;
			if (choose = 0)
			{
				choose--;
			}
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
					choose = 0;
				}
				while (file)
				{
					std::getline(file, text);
					std::cout << text << std::endl;
					text_sum = text_sum + text + "\n";
				}
				break;
			}
			case 1:
			{
				std::cout << "Введите текст\n";
				std::cin.ignore();
				std::getline(std::cin, text_sum);
				break;
				choose = 0;
			}
			default:
				std::cout << "error";
				break;
			}
		} while (choose != 0);
		std::cout << "\nВведите название песни - ";
		std::getline(std::cin, name);
		std::cout << "\n";
		std::cout << "Введите исполнителя - ";
		std::getline(std::cin, actor);
		std::cout << "\n";
		std::cout << "Введите год выпуска - ";
		std::getline(std::cin, age);
		std::cout << "\n";
		std::cout << "Песня добавлена...\n";
	}
	void print()
	{
		std::cout << "Текст:\n" << text_sum << "\n";
		std::cout << "Название - " << name << "\n";
		std::cout << "Исполнитель - " << actor << "\n";
		std::cout << "Год - " << age << "\n";
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
	int size = 0, choose, posit = 0,s2;
	std::vector <songs> songs;
	std::string hou;
	do
	{
		system("pause");
		system("cls");
		std::cout << "1.Добавить\n2.Вывести\nЧто необходимо сделать? - ";
		std::cin >> choose;
		if (choose == 0)
			choose--;
		switch (choose)
		{
		case 1:
		{
			posit = 1;
			std::cout << "Укажите сколько текстов вы хотите добавить - ";
			std::cin >> s2;
			if (s2 > 0)
			{
				size = size + s2;
				songs.resize(size);
				for (int i = 0; i < s2; i++)
				{
					songs.at(i).add();
				}
				break;
			}
			else
				std::cout << "Всм???\n";
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
			std::cout << "Нет такого варианта...\n";
			break;
		}
		}
	} while (choose != 0);
}



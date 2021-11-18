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
			if (choose == 0)
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
				while (getline(file, text))
				{
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
				text_sum = text_sum + "\n";
				choose = 0;
				break;
			}
			default:
				std::cout << "Нет такого варианта ответа...\n";
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
	void print(int a)
	{
		std::cout << "\n#" << a << "\nТекст:\n" << text_sum << "\n";
		std::cout << "Название - " << name << "\n";
		std::cout << "Исполнитель - " << actor << "\n";
		std::cout << "Год - " << age << "\n";
	}
	void edit()
	{
		std::cout << "Введите текст\n";
		std::cin.ignore();
		std::getline(std::cin, text_sum);
		text_sum = text_sum + "\n";
	}
	void save()
	{
		std::ofstream out("txt.txt", std::ios::app);
		if (out.is_open())
		{
			out.write((char*)&text, sizeof(text));
		}
		out.close();
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
	int size = 0, choose, posit = 0, s2, a = 0, num, j = 0;
	std::vector <songs> song;
	std::string hou;
	do
	{
		system("pause");
		system("cls");
		std::cout << "1.Добавить\n2.Вывести\n3.Удалить текст\n4.Изменить текст\n5.Сохранение текста в файл\nЧто необходимо сделать? - ";
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
				size = song.size() + s2;
				song.resize(size);
				for (int i = 0; i < s2; i++)
				{
					song.at(a).add();
					a++;
				}
				break;
			}
			else
				std::cout << "Всм???\n";
		}
		case 2:
		{
			if (song.size() == 0)
				std::cout << "Не добавлено ни одного текста..\n";
			else
				for (int i = 0; i < song.size(); i++)
				{
					j = i + 1;
					song.at(i).print(j);
				}
			break;
		}
		case 3:
		{
			if (song.size() == 0)
				std::cout << "Не добавлено ни одного текста..\n";
			else
			{
				for (int i = 0; i < song.size(); i++)
				{
					j = i + 1;
					song.at(i).print(j);
				}
				std::cout << "\nКакой текст вы хотите удалить? - ";
				std::cin >> num;
				num--;
				if (song.size() > num and num >= 0)
				{
					auto iter = song.cbegin();
					song.erase(iter + num);
					a--;
					std::cout << "\nУдалено\n";
				}
				else
				{
					std::cout << "\nНедопустимое значение!" << std::endl;
				}
				break;
				for (int i = 0; i < song.size(); i++)
				{
					j = i + 1;
					song.at(i).print(j);
				}
			}
		}break;
		case 4:
		{
			if (song.size() == 0)
				std::cout << "Не добавлено ни одного текста..\n";
			else
			{
				for (int i = 0; i < song.size(); i++)
				{
					j = i + 1;
					song.at(i).print(j);
				}
				std::cout << "\nКакой текст вы хотите изменить? - ";
				std::cin >> num;
				num--;
				if (song.size() > num and num >= 0)
				{
					song.at(num).edit();
					std::cout << "\nИзменено\n";
				}
				else
				{
					std::cout << "\nНедопустимое значение!" << std::endl;
				}
				break;
				for (int i = 0; i < song.size(); i++)
				{
					j = i + 1;
					song.at(i).print(j);
				}
			}
		}break;
		case 5:
		{
			if (song.size() == 0)
				std::cout << "Не добавлено ни одного текста..\n";
			else
			{
				for (int i = 0; i < song.size(); i++)
				{
					j = i + 1;
					song.at(i).print(j);
				}
				std::cout << "\nКакой текст вы хотите сохрнаить? - ";
				std::cin >> num;
				num--;
				if (song.size() > num and num >= 0)
				{
					song.at(num).save();
					std::cout << "\nСохранено!\n";
				}
				else
				{
					std::cout << "\nНедопустимое значение!" << std::endl;
				}
			}
		}break;
		default:
		{
			std::cout << "Нет такого варианта...\n";
			break;
		}
		}

	} while (choose != 0);
}

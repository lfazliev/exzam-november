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
			std::cout << "1.� ����������\n2.�� �����\n��� �� ������ �������� ����� �����? - ";
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
				std::cout << "������� ���� � ����� - ";
				std::cin.ignore();
				std::getline(std::cin, hou);
				std::ifstream file(hou);
				if (!file)
				{
					std::cout << "���� �� ������\n\n";
				}
				else
				{
					std::cout << "��� ��! ���� ������!\n\n";
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
				std::cout << "������� �����\n";
				std::cin.ignore();
				std::getline(std::cin, text_sum);
				text_sum = text_sum + "\n";
				choose = 0;
				break;
			}
			default:
				std::cout << "��� ������ �������� ������...\n";
				break;
			}
		} while (choose != 0);
		std::cout << "\n������� �������� ����� - ";
		std::getline(std::cin, name);
		std::cout << "\n";
		std::cout << "������� ����������� - ";
		std::getline(std::cin, actor);
		std::cout << "\n";
		std::cout << "������� ��� ������� - ";
		std::getline(std::cin, age);
		std::cout << "\n";
		std::cout << "����� ���������...\n";
	}
	void print(int a)
	{
		std::cout << "\n#" << a << "\n�����:\n" << text_sum << "\n";
		std::cout << "�������� - " << name << "\n";
		std::cout << "����������� - " << actor << "\n";
		std::cout << "��� - " << age << "\n";
	}
	void edit()
	{
		std::cout << "������� �����\n";
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
		std::cout << "1.��������\n2.�������\n3.������� �����\n4.�������� �����\n5.���������� ������ � ����\n��� ���������� �������? - ";
		std::cin >> choose;
		if (choose == 0)
			choose--;
		switch (choose)
		{
		case 1:
		{
			posit = 1;
			std::cout << "������� ������� ������� �� ������ �������� - ";
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
				std::cout << "���???\n";
		}
		case 2:
		{
			if (song.size() == 0)
				std::cout << "�� ��������� �� ������ ������..\n";
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
				std::cout << "�� ��������� �� ������ ������..\n";
			else
			{
				for (int i = 0; i < song.size(); i++)
				{
					j = i + 1;
					song.at(i).print(j);
				}
				std::cout << "\n����� ����� �� ������ �������? - ";
				std::cin >> num;
				num--;
				if (song.size() > num and num >= 0)
				{
					auto iter = song.cbegin();
					song.erase(iter + num);
					a--;
					std::cout << "\n�������\n";
				}
				else
				{
					std::cout << "\n������������ ��������!" << std::endl;
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
				std::cout << "�� ��������� �� ������ ������..\n";
			else
			{
				for (int i = 0; i < song.size(); i++)
				{
					j = i + 1;
					song.at(i).print(j);
				}
				std::cout << "\n����� ����� �� ������ ��������? - ";
				std::cin >> num;
				num--;
				if (song.size() > num and num >= 0)
				{
					song.at(num).edit();
					std::cout << "\n��������\n";
				}
				else
				{
					std::cout << "\n������������ ��������!" << std::endl;
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
				std::cout << "�� ��������� �� ������ ������..\n";
			else
			{
				for (int i = 0; i < song.size(); i++)
				{
					j = i + 1;
					song.at(i).print(j);
				}
				std::cout << "\n����� ����� �� ������ ���������? - ";
				std::cin >> num;
				num--;
				if (song.size() > num and num >= 0)
				{
					song.at(num).save();
					std::cout << "\n���������!\n";
				}
				else
				{
					std::cout << "\n������������ ��������!" << std::endl;
				}
			}
		}break;
		default:
		{
			std::cout << "��� ������ ��������...\n";
			break;
		}
		}

	} while (choose != 0);
}

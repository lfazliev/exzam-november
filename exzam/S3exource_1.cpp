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
			if (choose = 0)
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
				std::cout << "������� �����\n";
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
	void print()
	{
		std::cout << "�����:\n" << text_sum << "\n";
		std::cout << "�������� - " << name << "\n";
		std::cout << "����������� - " << actor << "\n";
		std::cout << "��� - " << age << "\n";
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
		std::cout << "1.��������\n2.�������\n��� ���������� �������? - ";
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
				size = size + s2;
				songs.resize(size);
				for (int i = 0; i < s2; i++)
				{
					songs.at(i).add();
				}
				break;
			}
			else
				std::cout << "���???\n";
		}
		case 2:
		{
			if (posit == 0)
				std::cout << "�� ��������� �� ������ ������..\n";
			else
				for (int i = 0; i < songs.size(); i++)
					songs.at(i).print();
			break;
		}
		default:
		{
			std::cout << "��� ������ ��������...\n";
			break;
		}
		}
	} while (choose != 0);
}



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
			std::cout << "1.� ����������\n2.�� �����\n";
			std::cin >> choose;
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
			std::cout << "������� �������� ����� - ";
			std::cin >> name;
			std::cout << "\n";
			std::cout << "������� ����������� - ";
			std::cin >> actor;
			std::cout << "\n";
			std::cout << "������� ��� ������� - ";
			std::cin >> age;
			std::cout << "\n";
			std::cout << "����� ���������...\n";
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
		std::cout << "1.��������\n2.�������\n";
		std::cin >> choose;
		switch (choose)
		{
		case 1:
		{
			posit = 1;
			std::cout << "������� ������� ������� �� ������ ��������.. \n";
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
				std::cout << "�� ��������� �� ������ ������..\n";
			else
				for (int i = 0; i < songs.size(); i++)
					songs.at(i).print();
			break;
		}
		default:
		{
			std::cout << "�� �����";
			break;
		}
		}
	} while (choose != 0);
}



/*#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
int main()
{
    system("chcp 1251");
    system("pause");
    system("cls");
    int choose, a, b, c, n;
    do
    {
        std::cout << "\n�������� ������ ����\n1.2�2\n2.4�4\n3.6�6\n";
        std::cin >> choose;
        switch (choose)
        {
        case 1:
        {
            a = 2;
            b = 2;
           
        }break;
        case 2:
        {
            a = 4;
            b = 4;
           
        }break;
        case 3:
        {
            a = 6;
            b = 6;
           
        }break;
        default:
        {
            std::cout << "��� ������ �������� ������!";
        }break;
        }
    } while (choose != 1 && choose != 2 && choose != 3);
    std::vector<std::vector<int>> ivec(a);
    std::vector<std::vector<int>> boba(a);
    n = (a * b) / 2;
    for (auto i = 0; i < a; ++i)
    {
        ivec[i].resize(b);
        for (auto j = 0; j < b; ++j)
            ivec[i][j] = -1;
    }
    for (auto i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            while (ivec != -1)
            {
                ivec.push_back = rand() % n;
               
            }
            ivec = ivec[i][j];
        }
    }
    for (auto i = 0; i < a; ++i)
    {
        boba[i].resize(b);
        for (auto j = 0; j < b; ++j)
            boba[i][j] = 0;
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            std::cout << boba[i][j] << " ";
        std::cout << std::endl;
    }
}
*/
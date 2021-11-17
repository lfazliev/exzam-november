#include <iostream>
#include <vector>
#include <ctime>
int main()
{
    system("chcp 1251");
    system("pause");
    system("cls");
    int choose, a, b, n;
    do
    {
        std::cout << "\nВыберите размер поля\n1.2х2\n2.4х4\n3.6х6\n";
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
            std::cout << "Нет такого варианта ответа!";
        }break;
        }
    } while (choose != 1 && choose != 2 && choose != 3);
    
    std::vector<std::vector<int>> ivec(a);
    std::vector<std::vector<int>> boba(a);
    n = (a * b) / 2;
    std::vector<int> vecr(n);
    for (auto i = 0; i < a; ++i)
    {
        ivec[i].resize(b);
        for (auto j = 0; j < b; ++j)
            ivec[i][j] = 0;
    }
    for (auto i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            while (ivec.at[a][b] != 0)
            {
                ivec.push_back = rand() % a + 1;
                ivec.push_back = rand() % b + 1;
            }
            ivec[i][j] = vecr[i];
            while (ivec.at[a][b] != 0)
            {
                ivec.push_back = rand() % a + 1;
                ivec.push_back = rand() % b + 1;
               
            }
            ivec[i][j] = vecr[i];
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

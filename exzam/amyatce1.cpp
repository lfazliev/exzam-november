/*#include <iostream>
#include <vector>
#include <ctime>
void printV(std::vector<std::vector<int>> nool)
{
    for (int i = 0; i < nool.size(); i++)
    {
        for (int j = 0; j < nool.size(); j++)
        {
            std::cout << nool[i][j] << "\t";

        }
        std::cout << std::endl << std::endl;;
    }
}
int main()
{
    system("chcp 1251");
    system("pause");
    system("cls");
    srand((int)time(NULL));
    int choose, X, Y, n, chec, polX, polY, polX1, polY1, schet = 0;
    do
    {
        std::cout << "\nВыберите размер поля\n1.2х2\n2.4х4\n3.6х6\n";
        std::cin >> choose;
        switch (choose)
        {
        case 1:
        {
            X = 2;
            Y = 2;

        }break;
        case 2:
        {
            X = 4;
            Y = 4;

        }break;
        case 3:
        {
            X = 6;
            Y = 6;

        }break;
        default:
        {
            std::cout << "Нет такого варианта ответа!";
        }break;
        }
    } while (choose != 1 && choose != 2 && choose != 3);
    std::vector<std::vector<int>> ivec(X);
    std::vector<std::vector<int>> nool(X);
    n = (X * Y) / 2;
    std::vector<int> vecr(n);
    chec = X * Y;
    for (int i = 0; i < vecr.size(); i++)
    {
        vecr.at(i) = i + 1;
    }
    int i_r, j_r;
    for (auto i = 0; i < X; ++i)
    {
        ivec[i].resize(Y);
        for (auto j = 0; j < Y; ++j)
            ivec[i][j] = -1;
    }
    for (auto i = 0; i < n; i++)
    {
        if (chec != 0)
        {
            do
            {
                i_r = rand() % X;
                j_r = rand() % Y;
            } while (ivec.at(i_r).at(j_r) != -1);
            ivec.at(i_r).at(j_r) = vecr[i];
            chec--;
            do
            {
                i_r = rand() % X;
                j_r = rand() % Y;
            } while (ivec.at(i_r).at(j_r) != -1);
            ivec.at(i_r).at(j_r) = vecr[i];
            chec--;
        }
    }
    for (auto i = 0; i < X; ++i)
    {
        nool[i].resize(Y);
        for (auto j = 0; j < Y; ++j)
            nool[i][j] = 0;
    }
    do
    {
        system("pause");
        system("cls");
        printV(nool);
        std::cout << "\nВыберите позицию по X and Y\n";
        std::cin >> polX;
        std::cout << "\n";
        std::cin >> polY;
        polX--;
        polY--;
        nool.at(polX).at(polY) = ivec.at(polX).at(polY);
        printV(nool);
        std::cout << "\nВыберите позицию по X and Y\n";
        std::cin >> polX1;
        std::cout << "\n";
        std::cin >> polY1;
        
        polX1--;
        polY1--;
        if (polX == polX1 && polY == polY1)
        {
            std::cout << "Вы не можете выбрать одно и то же положение повторно";
            break;
        }
        else
        {
            schet++;
            nool.at(polX1).at(polY1) = ivec.at(polX1).at(polY1);
            printV(nool);
        }
        if (nool.at(polX).at(polY) == nool.at(polX1).at(polY1))
        {
            std::cout << "Верно!\n";
            nool.at(polX).at(polY) = 404;
            nool.at(polX1).at(polY1) = 404;
            printV(nool);
            std::cout << "\n                               " << schet << " попытка\n404 - угаданные карты";
        }
        else
        {
            std::cout << "Неверно, повторите попытку                    " << schet << " попытка\n404 - угаданные карты";
        }
        break;

    } while (choose != 0);
}
*/
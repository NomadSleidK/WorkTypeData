#pragma once
#include "Libraries.h"

template <typename T> bool IsPossibleMatrixOperationFirst(T **matrix, int sizeMatrix, T type) //функция проверки выполняемости операции 1
{
    int amountMineElements = 0;
    bool flag = true;
    
    for (int hight = 0; hight < sizeMatrix; hight++) //двойной цикл подсчёта строк в которых есть хотя бы один отрицательный эдемент
    {
        for (int row = 0; row < sizeMatrix; row++)
        {
            if (matrix[row][hight] < 0) //если элемент меньше нуля
            {
                amountMineElements++;//прибавить единицу
                break;
            }
        }
    }
    if (amountMineElements == sizeMatrix) //проверка количества подсчитанных строк
    {
        cout << "Все строки массива содержат хотя бы один отрицательный элемент" << endl << endl;
        flag = false;
    }
    if (sizeMatrix == 1 && flag == true)//проверка размерности матрицы
    {
        cout << "Для данной операции размер матирицы должен быть больше единицы" << endl << endl;
        flag = false;
    }
    return flag;
}


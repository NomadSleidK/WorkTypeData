#pragma once
#include "Libraries.h"

template <typename T> T MaxSumDiagonal(T **matrix, int sizeMatrix) //поиск максимальной суммы диагоналей
{
    T result = 0;
    int positionDSum = 0, row = 0, hight = 0;
    int sizeResult = (sizeMatrix-2) * 2;
    T *diagonalSum = new T [sizeResult];
    
    for (int i = 0; i < sizeResult; i++) //цикл заполнеия массива результата нулями
    {
        diagonalSum[i] = 0;
    }
    for (int v = 1; v <= sizeMatrix - 2; v++) //двойной цикл подсчёта сумм диагоналей под главной диагональю
    {
        hight = v;
        row = 0;
        do
        {
            diagonalSum[positionDSum] += matrix[row][hight]; //добавить к сумме элемент диагонали матрицы
            row++;
            hight++;
        }while(hight < sizeMatrix); //индекс высоты не больше размера матрицы
        positionDSum++; //индекс для движения по элементам массива сумм
    }
    for (int h = 1; h <= sizeMatrix - 2; h++) //двойной цикл подсчёта сумм диагоналей над главной диагональю
    {
        hight = 0;
        row = h;
        do
        {
            diagonalSum[positionDSum] += matrix[row][hight]; //добавить к сумме элемент диагонали матрицы
            row++;
            hight++;
        }while(row < sizeMatrix); //индекс ширины не больше размера матрицы
        positionDSum++; //индекс для движения по элементам массива сумм
    }
    result = diagonalSum[0];
    for (int i = 1; i < sizeResult; i++) //выбор наибольшей суммы диагоналей
    {
        if (diagonalSum[i] > result)
        {
            result = diagonalSum[i];
        }
    }
    
    delete [] diagonalSum;
    return result;
}

template <typename T> int AmountLines(T **matrix, int sizeMatrix)
{
    int amountLines = 0;
    
    for (int hight = 0; hight < sizeMatrix; hight++) //двойной цикл подсчёта количества подходящих строк
    {
        for (int row = 0; row < sizeMatrix; row++)
        {
            if (matrix[row][hight] < 0) //если нашли орицательный элемент выходим из цикла
            {
                amountLines--;
                break;
            }
        }
        amountLines++;
    }
    return amountLines;
}

template <typename T> T **SumLineNoMin(T **matrix, int sizeMatrix) //выполнение операции 1
{
    int hightIndex = 0;
    int amountLines = AmountLines(matrix, sizeMatrix);
    T **result = new T *[2];
    for (int i = 0; i < 2; i++) //инициализация матрицы
    {
        result[i] = new T [amountLines];
    }
    
    
    for (int hight = 0; hight < amountLines; hight++) //двойной цикл заполнения нулями элементов матрицы-результата
    {
        for (int row = 0; row < 2; row++)
        {
            result[row][hight] = 0;
        }
    }

    for (int hight = 0; hight < sizeMatrix; hight++)//цикл заполнения первого столбца массива результата индексами нужных строк матрицы
    {
        for (int row = 0; row < sizeMatrix; row++)
        {
            if (matrix[row][hight] < 0)
            {
                hightIndex--;
                break;
            }
            result[0][hightIndex] = hight;
        }
        hightIndex++;
    }
    
    for (int i = 0; i < amountLines; i++) //заполняем второй столбец матрицы-результата суммой элементов строк по индексу из первого столбца
    {
        for (int row = 0; row < sizeMatrix; row++)
        {
            result[1][i] += matrix[row][int(result[0][i])];
        }
    }
    return result;
}

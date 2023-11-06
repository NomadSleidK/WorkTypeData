#pragma once
#include "Libraries.h"
#include "OperationTemplatesEx2.h"
#include "IsPosibleOperationsEx2.h"

template <typename T> void DispleyMaxSumDiagonal(T **matrix, int sizeMatrix)//вывод результата операции 2
{
    T resultMaxSum = 0;
    
    resultMaxSum = MaxSumDiagonal(matrix, sizeMatrix);//возвразаем результат операции 2
    cout << "Максимальная сумма среди диагоналей параллельных главной: " << resultMaxSum << endl << endl;
}

template <typename T> void DispleySumLineNoMin(T **matrix, int sizeMatrix)//вывод результата операции 1
{
    T **resultMatrix = NULL;
    int sizeResultMatrix = 0;
    
    resultMatrix = SumLineNoMin(matrix, sizeMatrix); //возвращаем массив результатов операции
    sizeResultMatrix = AmountLines(matrix, sizeMatrix); //присваиваем размер массива результатов
    for (int hight = 0; hight < sizeResultMatrix; hight++)//выводим массив результатов
    {
        cout << "Строка: " << resultMatrix[0][hight];
        cout << " Сумма элементов: " << resultMatrix[1][hight] << endl ;
    }
    
    delete[] resultMatrix;
}


template <typename T> void DispleyInputResult(T **matrix, int sizeMatrix)
{
    cout << "Введённая вами матрица: " << endl << endl;
    for (int hight = 0; hight < sizeMatrix; hight++) //проход по вертикали
    {
        for (int row = 0; row < sizeMatrix; row++) //проход по горизонтали
        {
            cout << matrix[row][hight] << ' ';
        }
        cout << endl << endl;
    }
}

template <typename T> void Ex2ComandControl(T **matrix, int sizeMatrix, T type) //функция контроля команд
{
    int command = 0;
    
    DispleyInputResult (matrix, sizeMatrix);
    do //цикл вызова команд
    {
        command = Ex2ComandInput(); //ввод команды
        system("clear");
        DispleyInputResult(matrix, sizeMatrix);
        switch (command) {
            case 1:
                if (IsPossibleMatrixOperationFirst(matrix, sizeMatrix, type) == true)
                {
                    DispleySumLineNoMin(matrix, sizeMatrix);
                }
                break;
            case 2:
                if (IsPossibleMatrixOperationSecond(sizeMatrix) == true)//проверка на выполнимость операции 2
                {
                    DispleyMaxSumDiagonal(matrix, sizeMatrix);//вывод результата операции 2
                }
                break;
        }
    }
    while(command != 0);//если команда 0 то выходим из цикла
}


template <typename T> void DispleyInputMatrixElement(T **matrix, int sizeMatrix, int amountDispleyElements)
{
    int amountElements = 0;
    
    cout << "Заполняемая вами матрица: " << endl << endl;
    for (int hight = 0; hight < sizeMatrix; hight++) //проход по вертикали
    {
        for (int row = 0; row < sizeMatrix; row++) //проход по горизонтали
        {
            if (amountElements != amountDispleyElements)
            {
                cout << matrix[row][hight] << ' ';
                amountElements++;
            }
            else
            {
                cout << "..." << ' ';
            }
        }
        cout << endl << endl;
    }
}

template <typename T> T **MatrixInput(int sizeMatrix, T type, char typeId)//функция ввода элементов матрицы
{
    char inputBoofer [11] = {0};
    T **matrix = new T *[sizeMatrix];
    int amountElements = 0;
    int element = 1;
    
    for (int i = 0; i < sizeMatrix; i++) //иниализация высоты матрицы
    {
        matrix[i] = new T [sizeMatrix];
    }
    
    system("clear");
    for (int hight = 0; hight < sizeMatrix; hight++) //проход по вертикали
    {
        for (int row = 0; row < sizeMatrix; row++) //проход по горизонтали
        {
            do
            {
                DispleyInputMatrixElement(matrix, sizeMatrix, amountElements);
                cout << "Введите " << element << " элемент матрицы  из " << sizeMatrix * sizeMatrix << ":" << endl;
                cin >> setw(11) >> inputBoofer;//ввод элемента в массив символов
            }
            while(InputTypeCheckEx1(inputBoofer, typeId) == false);//выход из цикла если функция проверки одобрит
            matrix[row][hight]= atof(inputBoofer); //присвоение элементу матрицы значения введённого значен
            element++;
            amountElements++;
        }
    }
    return matrix;
}

template <typename T> void MatrixTypeInput(int sizeMatrix, T type, char typeId) //инициализация массива, вызов его заполнеия и переход к меню команд обработки
{
    T **matrix = NULL;
    matrix = MatrixInput(sizeMatrix, type, typeId);
    
    Ex2ComandControl(matrix, sizeMatrix, type);
}

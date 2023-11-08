#pragma once
#include "Libraries.h"
#include "OperationTemplatesEx1.h"
#include "IsPosibleOperationsEx1.h"

template <typename T> void DispleyBaseArray(T *array, int arraySize, T type)
{
    cout << "Введённый массив: < ";
    for (int i = 0; i < arraySize; i++) //цикл ввода элемента по индексу
    {
        cout << array[i] << ' ';
    }
    cout << '>' << endl << endl;
}

template <typename T> void DispleyArrayCompression(T *array, int arraySize, T type) //функция вывода результата по операции 3
{
    T *resultArray = NULL;
    
    resultArray = ArrayCompression(array, arraySize, type); //возвращаем массив с результатами операции 3
    cout << "Сжатый массив: " << endl;
    
    for (int i = 0; i < arraySize; i++) //выводим сжатый массив
    {
        cout << resultArray[i] << " ";
    }
    cout << endl << endl;
    
    delete[] resultArray;
}

template <typename T> void DispleySumBetweenMinElements(T *array, int arraySize, T type) //функция вывода результата по операции 2
{
    
    cout << "Сумма элементов: " << SumElementsBetweenMinus(array, arraySize, type) << endl;
    
    cout << "Позиция первого отрицательного элемента: " << SearchFirstIndexMinus(array, arraySize, type) << endl;
    
    cout << "Позиция последнего отрицательного элемента: " << SearchLastIndexMinus(array, arraySize, type) << endl << endl;
}

template <typename T> void DispleySumOddElements(T *array, int arraySize, T type) //функция вывода результата по операции 1
{
    
    cout << "Сумма элементов: " << SumElementsInOddIndex(array, arraySize, type) << endl;
    
    cout << "Количество элементов: " << AmountOddElements(arraySize) << endl << "Координаты элементов: ";
    
    for (int index = 1; index < arraySize; index += 2)
    {
        cout << index << ' ';
    }
    cout << endl << endl;
}

template <typename T> void Ex1ComandControl(T *array, int arraySize, T type) // функция контроля команд для обработки
{
    int command = 0;
    bool operationFirst = IsPossibleOperationFirst(arraySize);
    bool operationSecond = IsPossibleOperationSecond(array, arraySize, type);
    bool operationThird = IsPossibleOperationThird(array, arraySize, type);
    
    DispleyBaseArray(array, arraySize, type);
    do{ //цикл для получения и вызова команд
        command = Ex1ComandInput(operationFirst, operationSecond, operationThird); //ввод команды для обработки массива
        system("clear");
        
        DispleyBaseArray(array, arraySize, type);
        switch (command) {
            case 1:
                if (IsPossibleOperationFirst(arraySize) == true)//проверка на выполнимость операции 1
                {
                    DispleySumOddElements(array, arraySize, type); //вывод результата операции 1
                }
                else
                {
                    cout << "Команды с таким номером нет" << endl;
                }
                break;
            case 2:
                if (IsPossibleOperationSecond(array, arraySize, type) == true)//проверка на выполнимость операции 2
                {
                    DispleySumBetweenMinElements(array, arraySize, type); //вывод результата операции 2
                }
                else
                {
                    cout << "Команды с таким номером нет" << endl;
                }
                break;
            case 3:
                if (IsPossibleOperationThird(array, arraySize, type) == true)//проверка на выполнимость операции 3
                {
                    DispleyArrayCompression(array, arraySize, type); //вывод результата операции 3
                }
                else
                {
                    cout << "Команды с таким номером нет" << endl;
                }
                break;
        }
    }
    while(command != 0); //если команда 0 то выходим из цикла
}

template <typename T> void DispleyInputElements(T *array, int index, int arraySize) //вывод введённых элементов массива
{
    int position = 0;
    
    cout << "Введённый массив: < ";
    for (; position < index; position++) //вывод введённых значений
    {
        cout << array[position] << ' ';
    }
    
    for (; position < arraySize; position++) //вывод троеточия вместо не введённых элементов
    {
        cout << "..." << ' ';
    }
    cout << '>' << endl;
}

template <typename T> T *InputArray(int arraySize, T type, char typeId) //функция ввода массива
{
    char inputBoofer [11] = {0};
    T *array = new T[arraySize];
    
    system("clear");
    for (int i = 0; i < arraySize; i++) //цикл ввода элемента по индексу
    {
        do
        {
            DispleyInputElements(array, i, arraySize);
            cout << "Введите " << i + 1 << " элемент массива из " << arraySize << ":" << endl;
            cin >> setw(11) >> inputBoofer;
        }
        while(InputTypeCheckEx1(inputBoofer, typeId) == false);//выход из цикла если функция проверки одобрит
        
        array[i] = atof(inputBoofer); //присвоение элементу массива по индексу значения введённого значения
    }
    return array;
}

template <typename T> void ArrayTypeInput(int arraySize, T type, char typeId) //инициализация массива, вызов его заполнеия и переход к меню команд обработки
{
    T *array = NULL;
    array = InputArray(arraySize, type, typeId);//вызов заполнеия массива

    Ex1ComandControl(array, arraySize, type);
    delete [] array;
}


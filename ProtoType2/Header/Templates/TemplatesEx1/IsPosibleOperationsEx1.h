#pragma once
#include "Libraries.h"

//Is posible Operations Ex1

template <typename T> bool IsPossibleOperationThird(T *array, int arraySize, T type)//проверка на реализуемость операции 3
{
    int amountElements = 0;
    bool flag = true;
    
    for (int i = 0; i < arraySize; i++) //подсчёт количество элементов по модулю больше 1
    {
        if (fabs(array[i]) > 1)
        {
            amountElements++;
        }
    }
    if (amountElements == arraySize) //если количество таких элементов = размеру массив то выдавать ошибку
    {
        //cout << "В массиве нет элементов по модулю меньше единицы" << endl << endl;
        flag = false;
    }
    return flag;
}

template <typename T> bool IsPossibleOperationSecond(T *array, int arraySize, T type)//проверка на реализуемость операции 2
{
    int firstIndex = 0, lastIndex = 0, amountMineElements = 0;
    bool Flag = true;
    
    for(int i = 0; i < arraySize; i++) //подсчёт количества отрицательных элементов массива
    {
        if (array[i] < 0)
        {
            amountMineElements++;
        }
    }
    switch (amountMineElements) { //если в массиве нет или только один отрицательный элемент то выдаём ошибку
        case 0:
            //cout << "Не удалось выполнить операцию: в массиве нет отрицательных элементов" << endl << endl;
            Flag = false;
            break;
        case 1:
            //cout << "Не удалось выполнить операцию: в массиве только один отрицательный элемент" << endl << endl;
            Flag = false;
            break;
    }
    if (Flag == true)
    {
        for (int i = 0;; i++) // //поиск индекса первого отрицательного элемента
        {
            if (array[i] < 0)
            {
                firstIndex = i;
                break;
            }
        }
        for (int i = arraySize-1;; i--) //поиск индекса последнего отрицательного элемента
        {
            if (array[i] < 0)
            {
                lastIndex = i;
                break;
            }
        }
        amountMineElements = lastIndex - firstIndex; //разница между первым и последним отрицательными элементами
        switch (amountMineElements) { //если элементы расположенны слишком близко выдаём ошибку
            case 1:
                //cout << "Не удалось выполнить операцию: необходимые отрицательные элементы расположены последовательно" << endl << endl;
                Flag = false;
                break;
            case 2:
                //cout << "Не удалось выполнить операцию: между искомыми элементами только одно значение" << endl << endl;
                Flag = false;
                break;
        }
    }
    return Flag;
}


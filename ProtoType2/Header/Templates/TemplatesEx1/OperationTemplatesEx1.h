#pragma once
#include "Libraries.h"

template <typename T> T *ArrayCompression(T *array, int arraySize, T type) //функция сжатия массива
{
    T *result = new T[arraySize];
    int index = 0;
    
    for (int i = 0; i < arraySize; i++) //циклом добавляем элементы по модулю больше 1 в результирующий массив и считаем их количество
    {
        if (fabs(array[i]) > 1)
        {
            result[index] = array[i];
            index++;
        }
    }
    for (; index < arraySize; index++) //через разницу длины массива и количества заполняем оставшиеся поля массива нулями
    {
        result[index] = 0.0;
    }
    
    return result;
}

template <typename T> int SearchFirstIndexMinus(T *array, int arraySize, T type) //поиск индекса первого отрицательного элемента
{
    int index = 0;
    
    for (int i = 0; i < arraySize; i++) //поиск индекса первого отрицательного элемента
    {
        if (array[i] < 0)
        {
            index = i;
            break;
        }
    }
    return index;
}

template <typename T> int SearchLastIndexMinus(T *array, int arraySize, T type) //поиск индекса последнего отрицательного элемента
{
    int index = 0;
    
    for (int i = arraySize - 1; i > -1; i--) //поиск индекса последнего отрицательного элемента
    {
        if (array[i] < 0)
        {
            index = i;
            break;
        }
    }
    return index;
}

template <typename T> T SumElementsBetweenMinus(T *array, int arraySize, T type) //сумма элементов между первым и последним отрицатльными числами
{
    int firstIndex = 0, lastIndex = 0;
    T sumElements = 0;
    
    firstIndex = SearchFirstIndexMinus(array, arraySize, type);
    lastIndex = SearchLastIndexMinus(array, arraySize, type);
    
    for (int i = firstIndex+1; i < lastIndex; i++) //подсчёт суммы элементов между первым и последним отрицательными элементами масива
    {
        sumElements += array[i];
    }
    
    return sumElements;
}


template <typename T> T SumElementsInOddIndex(T *array, int arraySize, T type) //функция суммы элементов операции 1
{
    T sumElements = 0.0;
    
    for (int i = 1; i < arraySize; i+=2) //сбор элементов с нечётных позиций
    {
        sumElements += array[i];
    }
    return sumElements;
}




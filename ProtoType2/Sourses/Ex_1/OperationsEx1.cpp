#include "Libraries.h"

bool IsPossibleOperationFirst(int arraySize)//проверка на реализуемость операции 1 Задания 1
{
    bool flag = true;
    
    if (arraySize < 4){ //если размер массива меньше 4 то выдаём ошибку
        cout << "Не удалось выполнить операцию: в массиве должно быть минимум 4 элемента" << endl << endl;
        flag = false;
    }
    return flag;
}

int AmountOddElements(int arraySize) //анализ количества элементов с нечётной позицией
{
    int Amount = arraySize/2;
    
    return Amount;
}

#include "Libraries.h"

bool IsPossibleMatrixOperationSecond(int sizeMatrix) //функция проверки выполняемости операции 2
{
    bool flag = true;
    
    if (sizeMatrix < 3)//если размерность матрицы меньше трёх, то выдаём ошибку
    {
        flag = false;
    }
    return flag;
}


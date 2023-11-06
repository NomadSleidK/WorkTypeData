#include "Libraries.h"

bool IsPossibleMatrixOperationSecond(int sizeMatrix) //функция проверки выполняемости операции 2
{
    bool flag = true;
    
    if (sizeMatrix < 3)//если размерность матрицы меньше трёх, то выдаём ошибку
    {
        cout << "Для выполнения операции размер матрицы должен быть больше двух" << endl << endl;
        flag = false;
    }
    return flag;
}


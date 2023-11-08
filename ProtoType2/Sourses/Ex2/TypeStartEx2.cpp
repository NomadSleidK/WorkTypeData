#include "Libraries.h"
#include "ControlTemplatesEx2.h"

bool InputTypeCheckEx2(char *dataInput, char typeId) //определяет тип вводимого значения матрицы
{
    bool result = true;
    
    switch (typeId){
        case 'i':
            result = CheckIntInput(dataInput);
            break;
        case 'f':
            result = CheckFloatInput(dataInput);
            break;
        case 'd':
            result = CheckDoubleInput(dataInput);
            break;
    }
    return result;
}

void Ex2main(char typeId) //главная функция задания 1
{
    int arraySize = 0;
    
    arraySize = MatrixSizeInput(); //присвоили размер массива после его проверки
    
    switch (typeId) {
        case 'i':
            MatrixTypeInput(arraySize, 1, typeId);
            break;
        case 'f':
            MatrixTypeInput(arraySize, 1.0f, typeId);
            break;
        case 'd':
            MatrixTypeInput(arraySize, 1.0, typeId);
            break;
    }
}


#include "Libraries.h"
#include "ControlTemplatesEx1.h"

bool InputTypeCheckEx1(char *dataInput, char typeId) //определяет тип вводимого значения массива
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

void Ex1main(char typeId) //главная функция задания 1
{
    int arraySize = 0;
    
    arraySize = ArraySizeInput(); //присвоили размер массива после его проверки
    
    switch (typeId) {
        case 'i':
            ArrayTypeInput(arraySize, 1, typeId);
            break;
        case 'f':
            ArrayTypeInput(arraySize, 1.0f, typeId);
            break;
        case 'd':
            ArrayTypeInput(arraySize, 1.0, typeId);
            break;
    }
}

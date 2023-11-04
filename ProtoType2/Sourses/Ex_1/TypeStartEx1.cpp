#include "Libraries.h"
//#include "TemplatesLibraries.h"
#include "ControlTemplatesEx1.h"
#include "OperationTemplatesEx1.h"
#include "IsPosibleOperationsEx1.h"

bool InputTypeCheck(char *dataInput, char typeId)
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
    
    arraySize = MasSizeInput(); //присвоили размер массива после его проверки
    
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

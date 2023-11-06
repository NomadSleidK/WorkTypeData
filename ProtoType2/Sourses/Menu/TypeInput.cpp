#include "Libraries.h"

bool IsNameType(char simbol) //проверяет правильность ведённого имени типа
{
    bool flag = false;
    
    system("clear");
    if (simbol == 'i' || simbol == 'f' || simbol == 'd')
    {
        flag = true;
    }
    else
    {
        cout << "Такого типа данных нет" << endl;
    }
    return flag;
}

char InputDataType() //меню запроса на ввод типа данных для работы
{
    char result;
    
    do
    {
        TextOut(6);
        cin >> result;
    }
    while(IsNameType(result) != true);
    
    return result;
}


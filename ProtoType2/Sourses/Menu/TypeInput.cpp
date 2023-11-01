#include "Libraries.h"

bool IsNameType(char simbol)
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

char InputDataType()
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


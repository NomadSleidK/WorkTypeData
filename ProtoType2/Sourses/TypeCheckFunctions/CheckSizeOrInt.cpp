#include "Libraries.h"

bool CheckSizeInput (char *dataInput) //функция проверки корректности введённой размерности массива
{
    int element = 0;
    int sizeDataInput = (int)strlen(dataInput);
    bool flag = true;
    
    system("clear");
    for (int i = 0; i < sizeDataInput; i++)
    {
        if (ispunct(dataInput[i])) //проверка на наличие символов
        {
            cout << "Значение должно быть целым числом и не содержит знаков" << endl << endl;
            flag = false;
            break;
        }
        else if (isupper(dataInput[i]) or islower(dataInput[i])) //проверка на наличие букв
        {
            cout << "Значение не должно содержать букв" << endl << endl;
            flag = false;
            break;
        }
    }
    element = atoi(dataInput);
    if (((element  > 100) ||(element  < 1)) && (flag == true)) //проверка на размерность больше 0
    {
        cout << "Значение должно быть больше 0 но меньше 100" << endl << endl;
        flag = false;
    }
    return flag;
}

bool CheckIntInput (char *dataInput) //функция проверки корректности введённого значения элемента int
{
    int sizeDataInput = (int)strlen(dataInput), element = 0;
    bool flag = true;
    
    system("clear");
    if (ispunct(dataInput[0]) && dataInput[0] != '-')//проверка начала числа на отсутствие знаков кроме - если он есть
    {
        cout << "В начале числа не должно быть никаких знаков кроме минуса, если это необходимо" << endl << endl;
        flag = false;
    }
    
    if (flag == true)
    {
        for (int i = 1; i < sizeDataInput; i++)
        {
            if (ispunct(dataInput[i])) //проверка на наличие символов
            {
                cout << "Элемент должн быть целым числом" << endl << endl;
                flag = false;
                break;
            }
        }
    }
    
    if (flag == true)
    {
        for (int i = 0; i < sizeDataInput; i++)
        {
            if (isupper(dataInput[i]) or islower(dataInput[i])) //проверка на наличие букв
            {
                cout << "Элемент не должн содержать букв" << endl << endl;
                flag = false;
                break;
            }
        }
    }
    
    element = atoi(dataInput);
    if ((flag == true) && ((element > 999) || (element < -999)))
    {
        cout << "Число превышает допустимую размерность, допустимы значения от -999 до 999" << endl << endl;
        flag = false;
    }
    return flag;
}




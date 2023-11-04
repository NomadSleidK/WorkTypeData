#include "Libraries.h"

bool Ex1CheckSizeInput (char *dataInput) //функция проверки корректности введённой размерности массива
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

bool CheckFloatInput(char *dataInput) //функция проверки корректности введённого значения double
{
    
    system("clear");
    bool flag = true, sign = true;
    int sizeDataInput = (int)strlen(dataInput);
    float element = 0.0f;
    
    if (dataInput[sizeDataInput - 1] != 'f')
    {
        cout << "Значение типа float должно содержать f в конце" << endl << endl;
        flag = false;
    }
    
    if (ispunct(dataInput[0]) && dataInput[0] != '-')//проверка начала числа на отсутствие знаков кроме - если он есть
    {
        cout << "Значение не должно содержать никаких знаков кроме минуса, если это необходимо" << endl << endl;
        flag = false;
    }
    
    if (flag == true)
    {
        for (int i = 1; i < sizeDataInput; i++)
        {
            if ((dataInput[i] == '.') && (i != (sizeDataInput) - 1) && (sign == true))
            {
                sign = false;
                break;
            }
            else if (ispunct(dataInput[i]))//проверка на наличие символов
            {
                cout << "Значение не должено содержать никаких символов кроме одной точки" << endl << endl;
                flag = false;
                break;
            }
        }
    }
    
    if (flag == true)
    {
        for (int i = 0; i < sizeDataInput; i++) //проверка на наличие букв
        {
            if ((i == sizeDataInput - 1) && (dataInput[i] == 'f'))
            {
                break;
            }
            else if (isupper(dataInput[i]) || islower(dataInput[i]))
            {
                cout << "Значение float не должен содержать никаких букв кроме f в конце" << endl << endl;
                flag = false;
                break;
            }
        }
    }
    
    element = atof(dataInput); //проверка на допустимость значения
    if ((flag == true) && ((element > 999.0) || (element < -999.0)))
    {
        cout << "Число превышает допустимую размерность, допустимы значения от -999 до 999" << endl;
        flag = false;
    }
    return flag;
}

bool CheckDoubleInput(char *dataInput) //функция проверки корректности введённого значения double
{
    
    system("clear");
    bool flag = true, sign = true;
    int sizeDataInput = (int)strlen(dataInput);
    double element = 0.0;
    
    if (ispunct(dataInput[0]) && dataInput[0] != '-')//проверка начала числа на отсутствие знаков кроме - если он есть
    {
        cout << "Значение не должно содержать никаких знаков кроме минуса, если это необходимо" << endl << endl;
        flag = false;
    }
    
    if (flag == true)
    {
        for (int i = 1; i < sizeDataInput; i++)
        {
            if ((dataInput[i] == '.') && (i != (sizeDataInput) - 1) && (sign == true))
            {
                sign = false;
                break;
            }
            else if (ispunct(dataInput[i]))//проверка на наличие символов
            {
                cout << "Значение не должено содержать никаких символов кроме одной точки" << endl << endl;
                flag = false;
                break;
            }
        }
    }
    
    if (flag == true)
    {
        for (int i = 0; i < sizeDataInput; i++) //проверка на наличие букв
        {
            if (isupper(dataInput[i]) or islower(dataInput[i]))
            {
                cout << "Значение не должен содержать никаких букв" << endl << endl;
                flag = false;
                break;
            }
        }
    }
    
    element = atof(dataInput); //проверка на допустимость значения
    if ((flag == true) && ((element > 999.0) || (element < -999.0)))
    {
        cout << "Число превышает допустимую размерность, допустимы значения от -999 до 999" << endl;
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

bool Ex1CheckComandInput (char *dataInput) //функция проверки корректности введённой команды
{
    int comand = 0;
    int sizeDataInput = (int)strlen(dataInput);
    bool flag = true;
    
    system("clear");
    for (int i = 0; i < sizeDataInput; i++)
    {
        if (ispunct(dataInput[i])) //проверка на наличие символов
        {
            cout << "Команда должна быть целым числом и не содержит знаков" << endl << endl;
            flag = false;
            break;
        }
        else if (isupper(dataInput[i]) or islower(dataInput[i])) //проверка на наличие букв
        {
            cout << "Команда не должна содержать букв" << endl << endl;
            flag = false;
            break;
        }
    }
    comand = atoi(dataInput);
    if ((comand > 3) && (flag == true)) //
    {
        cout << "Команды с данным номером не существует" << endl << endl;
        flag = false;
    }
    cout << endl;
    return flag;
}


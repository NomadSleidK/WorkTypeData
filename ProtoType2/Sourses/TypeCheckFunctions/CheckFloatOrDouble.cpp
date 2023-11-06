#include "Libraries.h"

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


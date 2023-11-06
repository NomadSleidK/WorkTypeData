#include "Libraries.h"

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

int Ex1ComandInput() //функция ввода комады для обработки массива
{
    int result =  0;
    char inputBoofer [11] = {0};
    
    do
    {
        TextOut(1);
        cout << "Введите номер команды для обработки массива: " << endl;
        cin >> setw(11) >> inputBoofer; //ввод команды в символьный массив
    }
    while (Ex1CheckComandInput(inputBoofer) == false);
    result = atoi(inputBoofer);
    return result;
}

int ArraySizeInput() //ввод размерности массива
{
    int size = 0;
    char inputBoofer [11] = {0};

    system("clear");
    do //цикл проверки корректности введённого размера массива
    {
        cout << "Введите размерность массива: " << endl;
        cin >> setw(11) >> inputBoofer;
    }
    while (CheckSizeInput(inputBoofer) == false);
    size = atoi(inputBoofer);
    return size;
}

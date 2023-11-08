#include "Libraries.h"

bool Ex1CheckComandInput(char *dataInput) //функция проверки корректности введённой команды
{
    int sizeDataInput = (int)strlen(dataInput);
    int command = 0;
    bool flag = true;
    
    system("clear");
    for (int i = 0; i < sizeDataInput; i++)
    {
        if (ispunct(dataInput[i])) //проверка на наличие символов
        {
            cout << "Команда должн быть целым числом и не содержит знаков" << endl << endl;
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
    
    command = atoi(dataInput); //проверка на наличие номера команды
    if ((command > 3) && (flag == true))
    {
        cout << "Команды с таким номером нет" << endl << endl;
        flag = false;
    }
    return flag;
}

int Ex1ComandInput(bool operationFirst, bool operationSecond, bool operationThird ) //функция ввода комады для обработки массива
{
    int result =  0;
    char inputBoofer [11] = {0};
    
    do
    {
        if (operationFirst == true) {TextOut(7);}
        if (operationSecond == true) {TextOut(8);}
        if (operationThird == true) {TextOut(9);}
        if (!operationFirst && !operationSecond && !operationThird)
        {
            cout << "Нет выполнимых операций для введённых вами данных" << endl << endl;
        }
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

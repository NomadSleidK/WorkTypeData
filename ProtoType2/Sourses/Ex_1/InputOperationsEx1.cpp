#include "Libraries.h"

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

int MasSizeInput() //ввод размерности массива
{
    int size = 0;
    char inputBoofer [11] = {0};

    system("clear");
    do //цикл проверки корректности введённого размера массива
    {
        cout << "Введите размерность массива: " << endl;
        cin >> setw(11) >> inputBoofer;
    }
    while (Ex1CheckSizeInput(inputBoofer) == false);
    size = atoi(inputBoofer);
    return size;
}

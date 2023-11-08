#include "Libraries.h"

bool Ex2CheckComandInput(char *dataInput) //функция проверки корректности введённой команды
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
    if ((command > 2) && (flag == true))
    {
        cout << "Команды с таким номером нет" << endl << endl;
        flag = false;
    }
    return flag;
}

int Ex2ComandInput(bool operationFirst, bool operationSecond)//функция ввода команды для обработки матрицы
{
    char inputBoofer [11] = {0};
    int result = 0;
    
    do
    {
        if (operationFirst == true) {TextOut(10);}
        if (operationSecond == true) {TextOut(11);}
        if (!operationFirst && !operationSecond)
        {
            cout << "Нет выполнимых операций для введённых вами данных" << endl << endl;
        }
        TextOut(2);
        cout << "Введите команду для работы с матрицей: " << endl;
        cin >> setw(11) >> inputBoofer;//ввод в массив символов
    }
    while(Ex2CheckComandInput(inputBoofer) == false);//выход из цикла если функция проверки одобрит
    result = atoi(inputBoofer);//присвоение команды из введённого значения
    return result;
}

int MatrixSizeInput() //функция ввода размерности матрицы
{
    char inputBoofer [11] = {0};
    int result = 0;
    
    system("clear");
    do //цикл проверки корректности введённого размера матрицы
    {
        cout << "Введите размер квадратной матрицы: " << endl;
        cin >> setw(11) >> inputBoofer; //ввод значения в массив символов
    }
    while (CheckSizeInput(inputBoofer) == false);//выход из цикла если функция проверки одобрит
    result = atoi(inputBoofer); //перевод результата в int
    return result;
}

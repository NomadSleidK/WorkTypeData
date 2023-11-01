#include "Libraries.h"

bool ComandIsGood(char *dataInput)
{
    bool flag = true;
    int sizeDataInput = (int)strlen(dataInput);
    int command = 0;
    
    system("clear");
    for (int i = 0; i < sizeDataInput; i++)
    {
        if (ispunct(dataInput[i])) //проверка на наличие символов
        {
            cout << "Команда должн быть целым числом" << endl << endl;
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
    
    if (flag == true)
    {
        command = atoi(dataInput); //проверка на наличие номера команды
        if ((command == 0) || (command == 1))
        {
            flag = true;
        }
        else
        {
            cout << "Команды с таким номером нет" << endl << endl;
            flag = false;
        }
    }
    return flag;
}

bool TaskContent(int command) //функция проверки ввода 1 или 0 что бы продолжить или вернуться соответственно
{
    bool flag = true;
    char inputBoofer [11] = {0};
    
    do
    {
        TextOut(command);
        cin >> setw(11) >> inputBoofer;//ввод в массив символов
    }
    while(ComandIsGood(inputBoofer) == false);
    if (atoi(inputBoofer) == 0)
    {
        flag = false;
    }
    return flag;
}



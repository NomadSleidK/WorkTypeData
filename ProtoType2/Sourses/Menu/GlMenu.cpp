#include "Libraries.h"

bool GmCheckComandInput (char *dataInput) //функция проверки корректности введённого номера задания
{
    int sizeDataInput = (int)strlen(dataInput);
    bool flag = true;
    
    for (int i = 0; i < sizeDataInput; i++)
    {
        if (ispunct(dataInput[i])) //проверка на наличие символов
        {
            system("clear");
            cout << "Номер задания должен быть целым числом" << endl << endl;
            flag = false;
            break;
        }
        else if (isupper(dataInput[i]) or islower(dataInput[i])) //проверка на наличие букв
        {
            system("clear");
            cout << "Номер задания не должн содержать букв" << endl << endl;
            flag = false;
            break;
        }
    }
    if ((atoi(dataInput) > 4) && (flag == true)) //
    {
        system("clear");
        cout << "Задания с данным номером не существует" << endl << endl;
        flag = false;
    }
    return flag;
}

int GmComandInput(char workType) //функция ввода комады для обработки массива
{
    char inputBoofer [11] = {0};
    int result =  0;
    
    system("clear");
    do
    {
        DataTypeOut(workType);
        TextOut(0);
        cout << "Введите номер задания: " << endl;
        cin >> setw(11) >> inputBoofer; //ввод команды в символьный массив
    }
    while (GmCheckComandInput(inputBoofer) != true); //выход из цикла если функция проверки одобрит
    result = atoi(inputBoofer); //преобразуем массив символов в значени int
    
    return result;
}

void GlobalMenu() //меню выбора номер задания
{
    int command = 0;
    char workType = 'i';
    
    do
    {
        command = GmComandInput(workType);
        switch (command)
        {
            case 1:
                system("clear");
                if (TaskContent(3) == true)
                {
                    //Ex1main();
                }
                break;
            case 2:
                system("clear");
                if (TaskContent(4) == true)
                {
                    //Ex2main();
                }
                break;
            case 3:
                system("clear");
                if (TaskContent(5) == true)
                {
                    //Ex3main();
                }
                break;
            case 4:
                system("clear");
                workType = InputDataType();
                break;
        }
    }
    while(command != 0);
}


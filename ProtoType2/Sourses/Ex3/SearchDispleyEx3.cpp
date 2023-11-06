#include "Libraries.h"

void DispleyWordCapitalLetter(char* arrFile, int size)//поиск и вывод слов начинающихся на гласную
{
    int index = 0;
    char alf [12] = {'A', 'a', 'E', 'e', 'I', 'i', 'U', 'u', 'Y', 'y', 'O', 'o'};
    
    for (int indA = 0; indA < 12; indA++) //проверяем является ли первый символ гласной буквой
    {
        if (arrFile[0] == alf[indA]) //если найдено соответствие гласной
        {
            while(islower(arrFile[index]) || isupper(arrFile[index])) //выводим все символы подряд пока не кончится слово
            {
                cout << arrFile[index];
                index++; //индекс позиции в тексте увеличиваем на единицу
            }
            cout << ' ';
            break;
        }
    }
    while (index < size) //пока индекс позиции в тексте меньше размера текста
    {
        if (arrFile[index] == ' ' && arrFile[index + 2] != ' ')//если найден пробел и через один символ впереди не пробел
        {
            index++;
            for (int indA = 0; indA < 12; indA++) //проверяем является ли первый символ гласной буквой
            {
                if (arrFile[index] == alf[indA]) //если найдено соответствие гласной
                {
                    while(islower(arrFile[index]) || isupper(arrFile[index])) //выводим все символы подряд пока не кончится слово
                    {
                        cout << arrFile[index];
                        index++;//индекс позиции в тексте увеличиваем на единицу
                    }
                    cout << ' ';
                    break;
                }
            }
        }
        else
        {
            index++;
        }
    }
    cout << endl << endl;
}

bool alfGood(char simbol)
{
    bool flag = false;
    char alf [12] = {'A', 'a', 'E', 'e', 'I', 'i', 'U', 'u', 'Y', 'y', 'O', 'o'};
    
    for (int indA = 0; indA < 12; indA++) //проверяем является ли первый символ гласной буквой
    {
        if (simbol == alf[indA]) //если найдено соответствие гласной
        {
            flag = true;
            break;
        }
    }
    return flag;
}

bool WordsInText(char* arrFile, int size)
{
    bool flag = false;
    int index = 1;
    char alf [12] = {'A', 'a', 'E', 'e', 'I', 'i', 'U', 'u', 'Y', 'y', 'O', 'o'};
    
    if (alfGood(arrFile[0]) == true && (islower(arrFile[1]) || isupper(arrFile[1])))
    {
        flag = true;
    }
    while ((index < size) && (flag == false)) //пока индекс позиции в тексте меньше размера текста
    {
        if (arrFile[index] == ' ' && arrFile[index + 2] != ' ')//если найден пробел и через один символ впереди не пробел
        {
            index++;
            for (int indA = 0; indA < 12; indA++) //проверяем является ли первый символ гласной буквой
            {
                if (arrFile[index] == alf[indA]) //если найдено соответствие гласной
                {
                    flag = true;
                    break;
                }
            }
        }
        index++;
    }
    return flag;
} //Artemii, sleid, alfa, bravo, echo! Delta first Is. Yaet grillo.



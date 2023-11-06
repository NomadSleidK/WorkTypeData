#include "Libraries.h"                    //Задача 3

char* FileName() //функция передачи имени файла для чтения
{
    char nameFile[] = "TextFile.txt";
    int sizeName = (int)strlen(nameFile);
    char* resultName = new char[sizeName];
    
    for (int i = 0; i < sizeName; i++)
    {
        resultName[i] = nameFile[i];
    }
    
    return resultName;
}

int FileSize()// определение размера файла
{
    int size = 0;
    ifstream fill;
    
    fill.open(FileName());
    fill.seekg(0, ios::end); // перейти в конец файла
    size = int(fill.tellg()); // получить текущую позицию (размер файла)
    fill.seekg(0, ios::beg); // вернуться в начало файла
    fill.close();
    return size;
}

char* FileRead(int Size) //чтение и запись содержимого файла
{
    char* arrFill = new char[Size + 1];
    char simbl;
    int index = 0;
    ifstream fill;
    
    fill.open(FileName());
    fill.seekg(0, ios::beg);
    while (fill.get(simbl)) // переносим символы из файла в массив char
    {
        arrFill[index] = simbl;
        index++;
    }
    fill.close();
    return arrFill;
}

void BackMenu()
{
    char inputBoofer [2] = {0};
    
    cout << "Введити 0 что бы выйти: " << endl;
    cin >> setw(2) >> inputBoofer;
    while (inputBoofer[0] != '0')
    {
        system("clear");
        cout << "Введити 0 что бы выйти: " << endl;
        cin >> setw(2) >> inputBoofer;
    }
    system("clear");
}

void DispleyText(char* arrFile, int size) //вывод текста
{
    cout << "Исходный текст: " << endl << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arrFile[i];
    }
    cout << endl << endl;
}

void Ex3main() //главная функция  задания 3
{
    char* arrFile = NULL;
    int size = FileSize();
    
    system("clear");
    ifstream fill;
    fill.open(FileName());
    arrFile = FileRead(size);
    
    if (fill.fail())//проверка на возможность открыть файл
    {
        cout << "Не удалось открыть файл!" << endl << endl;
    }
    else if (size == 1)// проверка на пустой файл
    {
        cout << "Ничего не найдено. Файл пустой!" << endl << endl;
    }
    else if (WordsInText(arrFile, size) == false) //проверка на наличие слов начинаюзихся на гласную
    {
        DispleyText(arrFile, size);
        cout << "В файле нет слов начинающихся на гласную букву" << endl << endl;
    }
    else if (WordsInText(arrFile, size) == true)//если проблем с файлом нет выводим слова
    {
        DispleyText(arrFile, size);
        cout << "Слова начинающиеся на гласную букву: " << endl << endl;
        DispleyWordCapitalLetter(arrFile, size);
    }
    fill.close();
    BackMenu();
    
    delete[] arrFile;
}


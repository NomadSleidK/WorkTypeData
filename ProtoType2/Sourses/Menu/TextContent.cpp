#include "Libraries.h"

void TextOut(int command)
{
    switch (command)
    {
        case 0:
            cout << "Выберите и введите номер задания из списка: " << endl;
            cout << "1 - работа с одномерным массивом вещественных чисел" << endl;
            cout << "2 - работа с целочисленной матрицей" << endl;
            cout << "3 - поиск слов начинающихся на гласную букву в английским текстом из файла" << endl;
            cout << "4 - выбрать тип данных для работы с заданиями 1 и 2" << endl;
            cout << "0 - завершение работы программы" << endl;
            break;
        case 1:
            cout << "Выберите и введите команду для обработки массива вещественных чисел: " << endl;
            cout << "1 - Найти сумму элементов массива с нечетными номерами, определить их количество и найти их координаты" << endl;
            cout << "2 - Найти сумму элементов массива, расположенных между первым и последним отрицательными элементами. Найти позиции первого и последнего отрицательных элементов, между которыми найдена сумма" << endl;
            cout << "3 - Сжать массив, удалив из него все элементы, модуль которых не превышает 1. Освободившиеся в конце массива элементы заполнить нулями " << endl;
            cout << "0 - Вернуться к выбору задания" << endl;
            break;
        case 2:
            cout << "Выберите и введите команду для обработки целочисленной матрицы: " << endl;
            cout << "1 - Найти произведение элементов в тех строках, которые не содержат отрицательных элементов. Определить координаты таких строк" << endl;
            cout << "2 - Найти максимум среди сумм элементов диагоналей, параллельных главной диагонали матрицы" << endl;
            cout << "0 - Вернуться к выбору задания" << endl;
            break;
        case 3:
            cout << "Вы выбрали задание 1. Далее вам будет необходимо ввести размер массива вещественных чисел и его элементы. Затем будут доступны следующие операции: " << endl;
            cout << " 1. Найти сумму элементов массива с нечетными номерами, определить их количество и найти их координаты" << endl;
            cout << " 2. Найти сумму элементов массива, расположенных между первым и последним отрицательными элементами. Найти позиции первого и последнего отрицательных элементов, между которыми найдена сумма" << endl;
            cout << " 3. Сжать массив, удалив из него все элементы, модуль которых не превышает 1. Освободившиеся в конце массива элементы заполнить нулями " << endl << endl;
            cout << "Для продолжения выполнения операции введите 1, если вы хотите вернуться в меню введите 0" << endl;
            break;
        case 4:
            cout << "Вы выбрали задание 2. Далее вам будет необходимо  размер квадратной целочисленной матрицы и её элементы. Затем будут доступны следующие операции: " << endl;
            cout << " 1. Найти сумму элементов массива с нечетными номерами, определить их количество и найти их координаты" << endl;
            cout << " 2. Найти сумму элементов массива, расположенных между первым и последним отрицательными элементами. Найти позиции первого и последнего отрицательных элементов, между которыми найдена сумма" << endl;
            cout << " 3. Сжать массив, удалив из него все элементы, модуль которых не превышает 1. Освободившиеся в конце массива элементы заполнить нулями " << endl << endl;
            cout << "Для продолжения выполнения операции введите 1, если вы хотите вернуться в меню введите 0" << endl;
            break;
        case 5:
            cout << "Вы выбрали задание 3. Далее будет выведено содержимое файла Ex3TextFille, а затем солова из текста этого файла, начинающиеся на гласную букву" << endl;
            cout << "Для продолжения выполнения операции введите 1, если вы хотите вернуться в меню введите 0" << endl;
            break;
        case 6:
            cout << "Для работы с заданиями 1 и 2 можно использовать следующие типы данных" << endl;
            cout << "i - выбрать тип int" << endl;
            cout << "f - выбрать тип float" << endl;
            cout << "d - выбрать тип double " << endl;
            cout << "Выберите один из типов данных приведённых выше: " << endl;
            break;
    }
    cout << endl;
}

void DataTypeOut(char workType)
{
    switch (workType) {
        case 'i':
            cout << "Для решения заданий 1 и 2 используется тип int" << endl << endl;
            break;
        case 'f':
            cout << "Для решения заданий 1 и 2 используется тип float" << endl << endl;
            break;
        case 'd':
            cout << "Для решения заданий 1 и 2 используется тип double" << endl << endl;
            break;
    }
}



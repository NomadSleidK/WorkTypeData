#pragma once

//Функции задания Главного меню и подтверждения дальнейшего перехода _____________

//GllMenu функции

bool GmCheckComandInput (char *dataInput); //функция проверки корректности введённого номера задания

int GmComandInput(char workType); //функция ввода комады для обработки массива

void GlobalMenu(); //меню выбора номер задания


//TypeInput функции

bool IsNameType(char simbol); //проверяет правильность ведённого имени типа

char InputDataType(); //меню запроса на ввод типа данных для работы


//ConfirmationOperation - функции для подтверждения выбранного задания

bool ComandIsGood(char *dataInput); //проверка правильности значения введённой команды

bool TaskContent(int command); //функция проверки ввода 1 или 0 что бы продолжить или вернуться соответственно


//TextOut - функции наборами текстов для последуюзего вывода на разных этапах работы

void TextOut(int command); //функция вывода текста на разных этапах программы

void DataTypeOut(char workType); //вывод имени используемого для работы типа данных


//Функции проверки корректности значений разных типов _______________

//CheckSizeOrInt - функции проверка корректности значения размера или int

bool CheckSizeInput (char *dataInput); //функция проверки корректности введённой размерности

bool CheckIntInput (char *dataInput); //функция проверки корректности введённого значения элемента int


//CheckFloatOrDouble - функции проверка корректности значения float или double

bool CheckFloatInput(char *dataInput); //функция проверки корректности введённого значения double

bool CheckDoubleInput(char *dataInput); //функция проверки корректности введённого значения double


//Функции задания 1 _________________________________________________

//TypeStartEx1

bool InputTypeCheckEx1(char *dataInput, char typeId); //определяет тип ввода

void Ex1main(char typeId); //главная функция задания 1


//InputOperationsEx1

bool Ex1CheckComandInput (char *dataInput); //функция проверки корректности введённой команды

int Ex1ComandInput(); //функция ввода комады для обработки массива

int ArraySizeInput(); //ввод размерности массива


//OperationsEx1

bool IsPossibleOperationFirst(int arraySize); //проверка на реализуемость операции 1 Задания 1

int AmountOddElements(int arraySize); //анализ количества элементов с нечётной позицией


//Функции задания 2 _________________________________________________

//TypeStartEx2

bool InputTypeCheckEx2(char *dataInput, char typeId); //определяет тип ввода

void Ex2main(char typeId); //главная функция задания 1


//InputOperationsEx2

bool Ex2CheckComandInput(char *dataInput); //функция проверки корректности введённой команды

int Ex2ComandInput(); //функция ввода команды для обработки матрицы

int MatrixSizeInput(); //функция ввода размерности матрицы


//OperationsEx2

bool IsPossibleMatrixOperationSecond(int sizeMatrix); //функция проверки выполняемости операции 2


//Функции задания 3 _________________________________________________

//ControlEx3

char* FileName(); //функция передачи имени файла для чтения

int FileSize(); // определение размера файла

char* FileRead(int Size); //чтение и запись содержимого файла

void BackMenu();

void DispleyText(char* arrFile, int size); //вывод текста

void Ex3main(); //главная функция  задания 3


//SearchDispleyEx3

void DispleyWordCapitalLetter(char* arrFile, int size); //поиск и вывод слов начинающихся на гласную

bool alfGood(char simbol);

bool WordsInText(char* arrFile, int size);












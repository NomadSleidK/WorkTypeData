#pragma once

//globMenu
int GmComandInput(); //функция ввода комады для обработки массива

bool GmCheckComandInput (char *dataInput); //функция проверки корректности введённого номера задания

void GlobalMenu();


//typeInput
bool IsNameType(char simbol);

char InputDataType();

//Confirmation
bool ComandIsGood(char *dataInput);

bool TaskContent(int command); //функция проверки ввода 1 или 0 что бы продолжить или вернуться соответственно

//TextOut

void TextOut(int command);

void DataTypeOut(char workType);

//InputOperations

int MasSizeInput(); //ввод размерности массива

int Ex1ComandInput(); //функция ввода комады для обработки массива


//Control1

void Ex1main(char dataType); //главная функция задания 1

bool InputTypeCheck(char *dataInput, char typeId);


//Is posible operations

bool IsPossibleOperationFirst(int arraySize); //проверка на реализуемость операции 1 Задания 1

int AmountOddElements(int arraySize); //анализ количества элементов с нечётной позицией


//checkInput

bool Ex1CheckSizeInput (char *dataInput); //функция проверки корректности введённого значения массива

bool CheckDoubleInput (char *dataInput); //функция проверки корректности введённого значения double

bool CheckFloatInput(char *dataInput); //функция проверки корректности введённого значения double

bool CheckIntInput (char *dataInput); //функция проверки корректности введённого значения элемента int

bool Ex1CheckComandInput (char *dataInput); //функция проверки корректности введённой команды


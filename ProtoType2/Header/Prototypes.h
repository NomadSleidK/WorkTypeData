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


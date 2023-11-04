#pragma once

#include "ControlTemplatesEx1.h"
#include "OperationTemplatesEx1.h"
#include "IsPosibleOperationsEx1.h"

//Control

template <typename T> void DispleyBaseArray(T, int, T);

template <typename T> void DispleyArrayCompression(T , int , T); //функция вывода результата по операции 3

template <typename T> void DispleySumBetweenMinElements(T , int , T); //функция вывода результата по операции 2

template <typename T> void DispleySumOddElements(T , int, T); //функция вывода результата по операции 1

template <typename T> void Ex1ComandControl(T , int, T); // функция контроля команд для обработки

template <typename T> void DispleyInputElements(T , int, int); //вывод введённых элементов массива

template <typename T> T *InputMassiv (int, T, char); //функция ввода массива

template <typename T> void ArrayTypeInput(int, T, char); //инициализация массива, вызов его заполнеия и переход к меню команд обработки

//Operstions

template <typename T> T *ArrayCompression(T , int, T); //функция сжатия массива

template <typename T> int SearchFirstIndexMinus(T, int, T); //поиск индекса первого отрицательного элемента

template <typename T> int SearchLastIndexMinus(T, int, T); //поиск индекса последнего отрицательного элемента

template <typename T> T SumElementsBetweenMinus(T, int, T); //сумма элементов между первым и последним отрицатльными числами

template <typename T> T SumElementsInOddIndex(T, int, T); //функция суммы элементов операции 1

//IsPosibleOperations

template <typename T> bool IsPossibleOperationThird(T, int, T); //проверка на реализуемость операции 3

template <typename T> bool IsPossibleOperationSecond(T, int, T); //проверка на реализуемость операции 2

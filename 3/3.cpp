﻿#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    /* Задание 3: В одномерном массиве, состоящем из N вещественных чисел вычислить:
• Сумму отрицательных элементов.
• Произведение элементов, находящихся между min и max элементами.
• Произведение элементов с четными номерами.
• Сумму элементов, находящихся между первым и последним отрицательными 
элементами.*/


    setlocale(LC_ALL, "Russian");
    srand(time(0));

    
    const int size = 10;
    float arr[size], sumotr = 0, min = arr[0], max = arr[0],  pros = 1, pros2 = 1, sum = 0;
    int minpos = 0, maxpos = 0, ot1 = 0, ot2 = 0;
    for (int i = 0; i < size; i++) {
        arr[i] = 0.5 + rand() % 20 - 10; //имитация вещественных чисел
    }
    //for (int i = 0; i < size; i++) cout << arr[i] << " ";  //вывод масива для проверки

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sumotr += arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
            minpos = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            maxpos = i;
        }
        if (i % 2 == 0) {
            pros *= arr[i];
        }
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            ot1 = i;
            break;
        }
    }
    for (int i = size - 1; i > 0; i--) {
        if (arr[i] < 0) {
            ot2 = i;
            break;
        }
    }
    for (int i = minpos; i <= maxpos; i++) {
        pros2 *= arr[i];
    }
    for (int i = ot1; i <= ot2; i++) {
        sum += arr[i];
    }
    cout << endl;
    cout << "Сумму отрицательных элементов: " << sumotr << endl;
    cout << "Произведение элементов, находящихся между min и max элементами: " << pros2 << endl;
    cout << "Произведение элементов с четными номерами: " << pros << endl;
    cout << "Сумму элементов, находящихся между первым и последним отрицательными элементами: " << sum << endl;

    return 0;
}

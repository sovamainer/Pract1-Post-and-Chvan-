#include <iostream>
#include "application.h"
#include "array.h"

using namespace std;

Application::Application()
{
    setlocale(LC_ALL, "RU");
}

void Application::showMenu()
{
    int choise = 0;
    int n = 0;
    cout << "Введите размер массива: ";
    cin >> n;
    Array arr(n);
    while (choise != 7)
    {
        system("cls");
        cout << "Меню:\n";
        cout << "1. Ввод элементов массива с консоли\n";
        cout << "2. Рассчет среднего и СКО элементов массива\n";
        cout << "3. Сортировка элементов массива\n";
        cout << "4. Изменение размерности массива\n";
        cout << "5. Изменение элемента массива\n";
        cout << "6. Вывод элементов массива\n";
        cout << "7. Выход\n\n";
        cout << "Команда: ";
        cin >> choise;

        switch (choise)
        {
        case 1:
            system("cls");
            inputArray(arr);
            break;
        case 2:
            system("cls");
            calculateDeterminant(arr);
            break;
        case 3:
            system("cls");
            sortArray(arr);
            break;
        case 4:
            system("cls");
            changeSize(arr);
            break;
        case 5:
            system("cls");
            changeElem(arr);
            break;
        case 6:
            system("cls");
            printArray(arr);
            break;
        case 7:
            system("cls");
            break;
        default:
            system("cls");
            cout << "Ошибка, нет команды с таким номером.\n";
            system("pause");
            system("cls");
        }
    }
}

void Application::inputArray(Array arr) {
    cout << "Введите элементы: ";
    arr.insertElem();
}

void Application::calculateDeterminant(Array arr) {
    arr.midAndSKO();
}

void Application::sortArray(Array arr) {
    cout << "Выберите вариант сортировки:\n";
    cout << "1. Сортировка по возрастанию\n";
    cout << "2. Сортировка по убыванию\n";
    int o;
    cin >> o;
    switch (o) {
    case 1:
        arr.insertionSortAbove();
        system("cls");
        cout << "Успешно!\n";
        system("pause");
        break;
    case 2:
        arr.insertionSortBeyond();
        system("cls");
        cout << "Успешно!\n";
        system("pause");
        break;
    default:
        system("cls");
        cout << "Неверный номер команды.\n";
        system("pause");
        break;
    }
}

void Application::changeSize(Array arr) {
    cout << "Введите измененный размер массива: ";
    int a;
    cin >> a;
    system("cls");
    arr.changeSize(a);
}

void Application::changeElem(Array arr) {
    cout << "Введите элемент, который хотите вставить в массив: ";
    number elem;
    cin >> elem;
    cout << "\nВведите индекс:";
    int index;
    cin >> index;
    system("cls");
    arr.changeElement(elem, index);
}

void Application::printArray(Array arr) {
    cout << "Исходный массив: ";
    arr.print();
    system("pause");
    system("cls");
}
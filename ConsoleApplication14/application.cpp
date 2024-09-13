#include <iostream>
#include "application.h"
#include "array.h"

using namespace std;

TApplication::TApplication()
{
    setlocale(LC_ALL, "RU");
}

int TApplication::exec()
{
    int ch = 0;
    int n = 0;
    cout << "Введите размер массива: ";
    cin >> n;
    TArray arr(n);
    while (true)
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            system("cls");
            cout << "Введите элементы: ";
            arr.insertElem();
            break;
        case 2:
            system("cls");
            arr.midAndSKO();
            break;
        case 3:
            system("cls");
            cout << "Выберите вариант сортировки:\n";
            cout << "1. Сортировка по возрастанию\n";
            cout << "2. Сортировка по убыванию\n";
            int sortDir;
            cin >> sortDir;
            switch (sortDir) {
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
            break;
        case 4:
            system("cls");
            cout << "Введите измененный размер массива: ";
            int newSize;
            cin >> newSize;
            system("cls");
            arr.changeSize(newSize);
            break;
        case 5:
            system("cls");
            cout << "Введите элемент, который хотите вставить в массив: ";
            number elem;
            cin >> elem;
            cout << "\nВведите индекс:";
            int index;
            cin >> index;
            system("cls");
            arr.changeElement(elem, index);
            break;
        case 6:
            system("cls");
            cout << "Массив: ";
            arr.print();
            system("pause");
            system("cls");
            break;
        case 7:
            system("cls");
            exit(0);
            break;
        default:
            system("cls");
            cout << "Ошибка, нет команды с таким номером.\n";
            system("pause");
            system("cls");
        }
    }
}

int TApplication::menu()
{
    int choise = 0;
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
    return choise;
}

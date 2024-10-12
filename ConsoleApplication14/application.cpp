#include <iostream>
#include "application.h"
#include "array.h"
#include "polynom.h"

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
        system("cls");
        ch = menu();
        number elem;
        switch (ch)
        {
        case 1:
            cout << "Введите элементы: ";
            arr.insertElem();
            break;
        case 2:
            arr.midAndSKO();
            break;
        case 3:
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
            cout << "Введите измененный размер массива: ";
            int newSize;
            cin >> newSize;
            
            arr.changeSize(newSize);
            break;
        case 5:
            cout << "Введите элемент, который хотите вставить в массив: ";
            
            cin >> elem;
            cout << "\nВведите индекс:";
            int index;
            cin >> index;
            system("cls");
            arr.changeElement(elem, index);
            break;
        case 6:
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


int TApplication::execPolynom()
{
    int ch = 0;
    TPolynom pol;
    int option;
    number x;
    int newSize;
    int index;
    number newRoot;
    number newCoeff;
    while (true)
    {
        system("cls");
        ch = menuPolynom();
        switch (ch)
        {
        case 1:
            pol.input();
            break;
        case 2:
            system("cls");
            cout << "Что Вы хотите изменить?\n0. Старший коэффициент\n1. Один из корней\n";
            cin >> option;
            if (option)
            {
                cout << "Введите индекс корня, который Вы хотите изменить: ";
                cin >> index;
                cout << "Введите новое значение корня по выбранному индексу: ";
                cin >> newRoot;
                pol.changeRoot(index, newRoot);
                cout << "Успешно!\n";
            }
            else
            {
                cout << "Введите новое значение старшего коэффициента: ";
                cin >> newCoeff;
                pol.changeCoeff(newCoeff);
                cout << "Успешно!\n";
            }
            system("pause");
            break;
        case 3:
            system("cls");
            cout << "В какой точке Вы хотите вычислить значение полинома?\n";
            cin >> x;
            cout << pol.calcPolynom(x);
            system("pause");
            break;
        case 4:
            cout << "Введите измененный размер массива: ";
            cin >> newSize;

            pol.changeRootSize(newSize);
            system("pause");
            break;
        case 5:
            system("cls");
            cout << "В какой форме вывести полином?\n0. В каноническом виде\n1. В виде произведения скобок\n ";
            cin >> option;
            if (option)
            {
                pol.printSecond();
            }
            else
            {
                pol.printFirst();
            }
            system("pause");
            break;
        case 6:
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

int TApplication::menuPolynom()
{
    int choise = 0;
    cout << "Меню:\n";
    cout << "1. Ввод старшего коэффициента и корней полинома с консоли\n";
    cout << "2. Изменить старший коэффициент или один из корней по индексу\n";
    cout << "3. Вычислить значение полинома в заданной точке\n";
    cout << "4. Изменение размерности массива\n";
    cout << "5. Вывод полинома\n";
    cout << "6. Выход\n\n";
    cout << "Команда: ";
    cin >> choise;
    return choise;
}
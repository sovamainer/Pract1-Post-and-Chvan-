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
    cout << "������� ������ �������: ";
    cin >> n;
    Array arr(n);
    while (choise != 7)
    {
        system("cls");
        cout << "����:\n";
        cout << "1. ���� ��������� ������� � �������\n";
        cout << "2. ������� �������� � ��� ��������� �������\n";
        cout << "3. ���������� ��������� �������\n";
        cout << "4. ��������� ����������� �������\n";
        cout << "5. ��������� �������� �������\n";
        cout << "6. ����� ��������� �������\n";
        cout << "7. �����\n\n";
        cout << "�������: ";
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
            cout << "������, ��� ������� � ����� �������.\n";
            system("pause");
            system("cls");
        }
    }
}

void Application::inputArray(Array arr) {
    cout << "������� ��������: ";
    arr.insertElem();
}

void Application::calculateDeterminant(Array arr) {
    arr.midAndSKO();
}

void Application::sortArray(Array arr) {
    cout << "�������� ������� ����������:\n";
    cout << "1. ���������� �� �����������\n";
    cout << "2. ���������� �� ��������\n";
    int o;
    cin >> o;
    switch (o) {
    case 1:
        arr.insertionSortAbove();
        system("cls");
        cout << "�������!\n";
        system("pause");
        break;
    case 2:
        arr.insertionSortBeyond();
        system("cls");
        cout << "�������!\n";
        system("pause");
        break;
    default:
        system("cls");
        cout << "�������� ����� �������.\n";
        system("pause");
        break;
    }
}

void Application::changeSize(Array arr) {
    cout << "������� ���������� ������ �������: ";
    int a;
    cin >> a;
    system("cls");
    arr.changeSize(a);
}

void Application::changeElem(Array arr) {
    cout << "������� �������, ������� ������ �������� � ������: ";
    number elem;
    cin >> elem;
    cout << "\n������� ������:";
    int index;
    cin >> index;
    system("cls");
    arr.changeElement(elem, index);
}

void Application::printArray(Array arr) {
    cout << "�������� ������: ";
    arr.print();
    system("pause");
    system("cls");
}
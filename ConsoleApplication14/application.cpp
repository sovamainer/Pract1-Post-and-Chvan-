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
    cout << "������� ������ �������: ";
    cin >> n;
    TArray arr(n);
    while (true)
    {
        system("cls");
        ch = menu();
        switch (ch)
        {
        case 1:
            cout << "������� ��������: ";
            arr.insertElem();
            break;
        case 2:
            arr.midAndSKO();
            break;
        case 3:
            cout << "�������� ������� ����������:\n";
            cout << "1. ���������� �� �����������\n";
            cout << "2. ���������� �� ��������\n";
            int sortDir;
            cin >> sortDir;
            switch (sortDir) {
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
            break;
        case 4:
            cout << "������� ���������� ������ �������: ";
            int newSize;
            cin >> newSize;
            
            arr.changeSize(newSize);
            break;
        case 5:
            cout << "������� �������, ������� ������ �������� � ������: ";
            number elem;
            cin >> elem;
            cout << "\n������� ������:";
            int index;
            cin >> index;
            system("cls");
            arr.changeElement(elem, index);
            break;
        case 6:
            cout << "������: ";
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
            cout << "������, ��� ������� � ����� �������.\n";
            system("pause");
            system("cls");
        }
    }
}

int TApplication::menu()
{
    int choise = 0;
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
    return choise;
}

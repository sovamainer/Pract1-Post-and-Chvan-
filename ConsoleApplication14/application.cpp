#include <iostream>
#include "application.h"
#include "array.h"

using namespace std;

Application::Application()
{
    Array arr;
    //ok
}

void Application::showMenu()
{
    int choise = 0;
    while(choise != 7)
    {
        cout << "����:\n";
        cout << "1. ���� ��������� ������� � �������\n";
        cout << "2. ������� �������� � ��� ��������� �������\n";
        cout << "3. ���������� ��������� �������\n";
        cout << "4. ��������� ����������� �������\n";
        cout << "5. ��������� �������� �������\n";
        cout << "6. ����� ��������� �������\n";
        cout << "7. �����\n";
        
        cin >> choise;

        switch (choise)
        {
        case 1:
            system("cls");
            inputArray();
            break;
        case 2:
            system("cls");
            calculateDeterminant();
            break;
        case 3:
            system("cls");
            sortArray();
            break;
        case 4:
            system("cls");
            changeSize();
            break;
        case 5:
            system("cls");
            changeElem();
            break;
        case 6:
            system("cls");
            printArray();
            break;
        case 7:
            system("cls");
            cout << "�� �������!";
            exit(0);
            break;
        default:
            system("cls");
            cout << "������������ ����, ���������� ���.\n";
        }
    }
}

void Application::inputArray() {
    int n;
    cout << "������� ������ �������: ";
    cin >> n;
    
}

void Application::calculateDeterminant() {
    arr.averAndSko();
}

void Application::sortArray() {

}

void Application::changeSize() 
{
    int n;
    cout << "������� ����� ������ �������: ";
    cin >> n;
}

void Application::changeElem() 
{
    int index;
    cout << "������� ������ �������� �������, ������� ������ ��������: ";
    cin >> index;
}

void Application::printArray()
{
    cout << "������: \n";
    arr.print();
}
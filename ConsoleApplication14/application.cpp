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
        cout << "Меню:\n";
        cout << "1. Ввод элементов массива с консоли\n";
        cout << "2. Рассчет среднего и СКО элементов массива\n";
        cout << "3. Сортировка элементов массива\n";
        cout << "4. Изменение размерности массива\n";
        cout << "5. Изменение элемента массива\n";
        cout << "6. Вывод элементов массива\n";
        cout << "7. Выход\n";
        
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
            cout << "До встречи!";
            exit(0);
            break;
        default:
            system("cls");
            cout << "Неправильный ввод, попробуйте еще.\n";
        }
    }
}

void Application::inputArray() {
    int n;
    cout << "Введите размер массива: ";
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
    cout << "Введите новый размер массива: ";
    cin >> n;
}

void Application::changeElem() 
{
    int index;
    cout << "Введите индекс элемента массива, который хотите изменить: ";
    cin >> index;
}

void Application::printArray()
{
    cout << "Массив: \n";
    arr.print();
}
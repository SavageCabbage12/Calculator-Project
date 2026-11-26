#include<iostream>
// #include "Multiply.hpp"

using namespace std;

int addition(int &a, int &b)
{
    return a + b;
}

int subtraction(int &a, int &b)
{
    if(a > b)
    {
        return a - b;
    }
    else if(a < b)
    {
        return b-a;
    }
    else 
    {
        return 0;
    }
}

int Multiplication(int &a, int&b)
{
    return a * b;
}

int main()
{
    int choice, a, b;

    do
    {
        cout << "----- Welcome to my Calculator -----" << endl;
        cout << "What do you want to perform :" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Addition" << endl;
        cout << "3. Multiplication" << endl;
        cout << "0. Exit the calculator." << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                cout << "The result of addition is: " << addition(a, b) << "." << endl;
                break;
            case 2:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                cout << "The absolute difference between the 2 numbers is: " << subtraction(a, b) << "." << endl;
                break;
            case 3:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                cout << "The result of multiplication is: " << Multiplication(a, b) << "." << endl;
                break;
            case 0:
                cout << "Exiting the code..." << endl;
                break;

        }
    }
    while(choice != 0);

    return 0;

}

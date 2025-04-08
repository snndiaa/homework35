#include <iostream>
using namespace std;

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
  return a / b;
}

int main()
{
	cout << "task 1" << endl;

    double (*operations[])(double, double) = { add, subtract, multiply, divide };
    char symbols[] = { '+', '-', '*', '/' };

    double a, b;
    int choice;

    cout << "\nYou can do following operations: " << endl;
    cout << "1. add (+)" << endl;
    cout << "2. substract (-)" << endl;
    cout << "3. multiply (*)" << endl;
    cout << "4. divide (/)" << endl;
    cout << "5. exit" << endl;

    cout << "\nChoose an operation (1-5): ";
    cin >> choice;

    if (choice >= 1 && choice <= 4)
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;

        if (choice == 4 && b == 0)
        {
            cout << "Error: division by zero!" << endl;
        }
        else
        {
            cout << "Result: " << operations[choice - 1](a, b) << endl;
        }
    }

    else if (choice == 5)
    {
        cout << "Exiting the programm" << endl;
        return 0;
    }

    else
    {
        cout << "Invalid choice. Exiting the programm" << endl;
        return 0;
    }

    cout << "\ntask 2" << endl;

    int size;
    cout << "\nEnter size of array: ";
    cin >> size;

    int* A = new int[size];
    int* B = new int[size];
    int* C = new int[size];

    cout << "Enter elements of the first array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }

    cout << "Enter elements of second array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < size; i++)
    {
        C[i] = A[i] + B[i];
    }

    cout << "\nThird array: ";
    for (int i = 0; i < size; i++)
    {
        cout << C[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] C;

    cout << endl;
    return 0;
}


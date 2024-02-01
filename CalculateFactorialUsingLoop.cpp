#include <iostream>
using namespace std;

int calculateFactorial(int number)
{
    int factorial = 1;

    if (number < 0)
    {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
        return -1;
    }

    for (int i = 2; i <= number; ++i)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    int number;


    cout << "Enter a positive integer: ";
    cin >> number;


    int factorial = calculateFactorial(number);

    if(factorial != -1)

        cout << "Factorial of " << number << " = " << factorial << endl;

    return 0;
}

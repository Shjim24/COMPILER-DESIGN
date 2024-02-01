#include <iostream>
using namespace std;

int main()
{
    const int MAX_SIZE = 100;
    int array[MAX_SIZE];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;


    if (size <= 0 || size > MAX_SIZE)
    {
        cout << "Invalid array size.\n";
        return 1;
    }


    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }


    float sum = 0.0;
    for (int i = 0; i < size; ++i)
    {
        sum += array[i];
    }


    float average = sum / size;

    cout << "Average value of the elements: " << average << endl;

    return 0;
}

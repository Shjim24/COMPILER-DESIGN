#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int array[size] = {3, 4, 7, 8, 10};

    int minimum = array[0];
    int maximum = array[0];

    for (int i = 1; i < size; ++i)
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }

    cout << "Minimum value: " << minimum << endl;
    cout << "Maximum value: " << maximum << endl;

    return 0;
}

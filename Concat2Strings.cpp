#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int MAX_LENGTH = 100;
    char firstName[MAX_LENGTH], lastName[MAX_LENGTH], fullName[2 * MAX_LENGTH + 1];

    cout << "Enter your first name: ";
    cin.getline(firstName, MAX_LENGTH);

    cout << "Enter your last name: ";
    cin.getline(lastName, MAX_LENGTH);

    int i = 0;
    while (firstName[i] != '\0')
    {
        fullName[i] = firstName[i];
        i++;
    }
    fullName[i] = ' ';
    i = 0;
    while (lastName[i] != '\0')
    {
        fullName[strlen(firstName) + 1 + i] = lastName[i];
        i++;
    }
    fullName[strlen(firstName) + 1 + i] = '\0';
    cout << "Full name: " << fullName << endl;

    return 0;
}

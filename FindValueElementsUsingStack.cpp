#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stack;
    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(10);
    stack.push(11);

    float sum = 0.0;
    int size = stack.size();
    while (!stack.empty())
    {
        sum += stack.top();
        stack.pop();
    }
    float average = sum / size;

    cout << "Average value of the elements: " << average <<endl;

    return 0;
}


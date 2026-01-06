#include <iostream>
using namespace std;

int main()
{

    int fact;

    cout << "Enter a number to find its factorial: ";
    cin >> fact;

   int factorial = fact;
    for (int i = factorial - 1; i >= 1; --i)
    {
        factorial *= i;
    }
    cout << "Factorial of " << fact << " is: " << factorial;

    return 0;
}
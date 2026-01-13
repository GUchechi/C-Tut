#include <iostream>
using namespace std;
#include <string>

template <typename T>

void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// Function to swap two integers by reference
/* void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;

    cout << "This is swap by reference - " << "a: " << a << ", b: " << b << endl;
}
*/

int main()
{

    int a = 10;
    int b = 20;
    std::swap(a, b);
    cout << "This is swap by reference - " << "a: " << a << ", b: " << b << endl;

    string firstName = "John";
    string lastName = "Doe";
    swap(firstName, lastName);
    cout << "This is swap by reference - " << "firstName: " << firstName << ", lastName: " << lastName << endl;

        return 0;
}
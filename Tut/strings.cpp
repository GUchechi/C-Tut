#include <iostream>
using namespace std;

int main()
{

    string greeting = "Hello, World!";
    // cout << "Enter a greeting: ";
    // greeting.append();
    // greeting.erase();
    // greeting.erase(3,1);
    // greeting.erase(greeting.length() - 1);
    // greeting.pop_back();
    // getline(cin, greeting);
    // greeting.replace(0, 5, "Hi");
    greeting.replace(greeting.find("World"), 5, "C++");

    cout << greeting;

    return 0;
}
#include <iostream>
using namespace std;
#include <vector>

class User
{

    string status = "Gold";

public:
    string first_name;
    string last_name;
    string get_status()
    {
        return status;
    }

    User()
    {
        cout << "Default constructor called." << endl;
    };

    void set_status(string status)
    {
        if (status == "Gold" || status == "Silver" || status == "Bronze")
        {
            this->status = status;
        }
        else
        {
            cout << "Invalid status. Status not changed." << endl;
        }
    }

        User(string first_name, string last_name, string status)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
        // cout << "Parameterized constructor called for " << first_name << " " << last_name << "." << endl;
    };
    ~User()
    {
        cout << "Destructor"<< endl;
    };
};

int main()
{
    User user;

    user.set_status("Gold");
    cout << user.get_status() << endl;

    user.set_status("Silver");
    cout << user.get_status() << endl;

    user.set_status("Bronze");
    cout << user.get_status() << endl;

    // user.set_status("Platinum"); // Invalid status
    // cout << user.get_status() << endl;
    return 0;
}
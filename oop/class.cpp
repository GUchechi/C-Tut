#include <iostream>
using namespace std;
#include <vector>

class User
{
    string status = "Active";

public:
    string first_name;
    string last_name;
    string get_status()
    {
        return status;
    }
};

bool add_user_if_not_exists(vector<User> &users, const User &new_user)
{
    for (const auto &user : users)
    {
        if (user.first_name == new_user.first_name &&
            user.last_name == new_user.last_name)
        {
            return false; // already exists
        }
    }

    users.push_back(new_user);
    return true; // added successfully
}

int main()
{
    vector<User> users;

    User user1, user2, user3;
    user1.first_name = "Godswill";
    user1.last_name = "Uchechi";

    user2.first_name = "Jane";
    user2.last_name = "Doe";

    user3.first_name = "John";
    user3.last_name = "Smith";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User new_user;
    new_user.first_name = "John";
    new_user.last_name = "Smith";

    if (add_user_if_not_exists(users, new_user))
    {
        cout << "User added. Total users: " << users.size() << endl;
    }
    else
    {
        cout << "User already exists." << endl;
    }

    cout << users.size() << endl;

    return 0;
}
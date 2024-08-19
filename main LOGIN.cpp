#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, string> users;

void registration() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (users.find(username) != users.end()) {
        cout << "Username already exists!" << endl;
        return;
    }

    users[username] = password;
    cout << "Registration successful!" << endl;
}

void login() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (users.find(username) == users.end()) {
        cout << "User not found!" << endl;
        return;
    }

    if (users[username] != password) {
        cout << "Invalid password!" << endl;
        return;
    }

    cout << "Login successful!" << endl;
}

int main() {
    int choice;

    do {
        cout << "1. Registration" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registration();
                break;
            case 2:
                login();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);

    return 0;
}



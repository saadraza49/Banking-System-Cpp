#include "bank.h"
#include <conio.h>   // for _getch()

// Function to take hidden password input
string getHiddenPassword(){
    string password = "";
    char ch;
    while (true)
    {
        ch = _getch();   // character without showing on screen
        if (ch == 13)    // ASCII code for Enter
            break;
        if (ch == 8)     // ASCII code for Backspace
        {
            if (!password.empty())
            {
                password.pop_back();
            }
        }
        else{    password += ch;    }
    }
    cout << endl;
    return password;
}
int main()
{
    Manager m;
    string username, password;
    int choice;
    cout << "<------ MANAGER LOGIN ------>\n";
    cout << "Enter Username: ";
    getline(cin,username);
    cout << "Enter Password: ";
    password = getHiddenPassword();   // hidden input here
    if (!m.managerLogin(username, password)){
        cout << "Invalid Credentials!\n";
        return 0;
    }
    cout << "\nLogin Successful!\n";
    do{
        cout << "\n<------ MANAGER MENU ------>\n";
        cout << "1. View All Clients\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1){
            m.viewAllClients();
        }
    } while (choice != 2);
    return 0;
}
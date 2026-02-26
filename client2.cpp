#include "bank.h"

int main()
{
    Client c("Zaki", "2222", "33100-2345678-9", 1002, 120000);

     string name, password;
    int choice;

    cout << "<------ CLIENT 2 LOGIN ------>\n";
    cout << "Enter Username: ";
    getline(cin, name);
    cout << "Enter Password: ";
    getline(cin, password);

    if (!c.login(name, password))
    {
        cout << "Invalid Credentials!\n";
        return 0;
    }

    cout << "\nLogin Successful!\n";

    do
    {
        cout << "\n<------ CLIENT 2 MENU ------>\n";
        cout << "1. View Account Details\n";   
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Check Balance\n";
        cout << "5. Change Name\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            c.displayInfo();
        }
        else if (choice == 2)
        {
            double amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            c.deposit(amount);
        }
        else if (choice == 3)
        {
            cout << "Re-enter Username: ";
            cin.ignore();               // consuming the newline character
            getline(cin, name);
            cout << "Re-enter Password: ";
            getline(cin, password);

            if (c.login(name, password))
            {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                c.withdraw(amount);
            }
            else
            {
                cout << "Authentication Failed!\n";
            }
        }
        else if (choice == 4)
        {
            c.checkBalance();
        }
        else if (choice == 5)
        {
            string newName,providedCnic;
            cout << "Please Re-Enter your CNIC: ";             
            cin.ignore();
            getline(cin, providedCnic);
            cout << "Enter new name: ";              
            getline(cin, newName);
            c.changeName(newName, providedCnic);
        }

    } while (choice != 6);

    return 0;
}
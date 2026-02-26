#include "bank.h"

Client::Client()
{
    name = "No Name";
    password = "No Password";
    cnic = "No CNIC";
    balance = 0;
    accountNumber = 0;
}

Client::Client(string n, string p, string c, int a, double b)
{   // this pointer to make sure the object is assigned to itself
    this->name = n;
    this->password = p;
    this->cnic = c;
    this->accountNumber = a;
    this->balance = b;
}

bool Client::login(string providedName, string providedPassword){
    return (name == providedName && password == providedPassword);
}

void Client::changeName(string newName, string providedCnic){
    if (cnic == providedCnic) {
        name = newName;
        cout << "Name Changed Successfully!\n";
    } else {
        cout << "Invalid CNIC!\n";
    }
}

void Client::deposit(double amount){
    balance += amount;
    cout << "Amount Deposited Successfully!\nYour new balance is: Rs." << balance << endl;
}

void Client::withdraw(double amount){
    if (amount <= balance)
    {
        balance -= amount;
        cout << "Amount Withdrawn Successfully!\nYour new balance is: Rs." << balance << endl;
    }
    else
    {
        cout << "Insufficient Balance!\nYour current balance is: Rs." << balance << endl;
    }
}

void Client::checkBalance()
{
    cout << "\nBalance: Rs." << balance << endl;
}

void Client::displayInfo()
{
    cout << "<-------- ACCOUNT DETAILS -------->\n"
         << "  Account No : " << accountNumber << endl
         << "  Name       : " << name << endl
         << "  CNIC       : " << cnic << endl
         << "  Balance    : Rs." << balance << endl
         << "<--------------------------------->\n";
}

Manager::Manager()
    : c1("Abdullah", "1234", "33100-2347823-1",1001, 80000),
      c2("Zaki", "5678", "33100-7544321-3",1002, 120000),
      c3("Zohaib", "9012", "33100-8923237-9",1003, 150000)
{
    username = "saad";
    password = "0966";
}

bool Manager::managerLogin(string providedName, string providedPassword)
{
    return (username == providedName && password == providedPassword);
}

void Manager::viewAllClients()
{
    cout << "\n<------ ALL CLIENTS ------>\n";
    cout << "\n";
    c1.displayInfo();
    c2.displayInfo();
    c3.displayInfo();
}
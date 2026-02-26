#ifndef BANK_H   // Header Guard to avoid repitition of code
#define BANK_H

#include <iostream>
using namespace std;

class Client 
{
private:
    string name;
    string password;
    string cnic;
    int accountNumber;
    double balance;

public:
    Client();
    Client(string n, string p, string c,int a ,double b);

    bool login(string providedName, string providedPassword);
    void changeName(string providedCnic , string newName);
    void deposit(double amount);
    void withdraw(double amount);
    void checkBalance();
    void displayInfo();

};

class Manager
{
private:
    string username;
    string password;

    Client c1;
    Client c2;
    Client c3;

public:
    Manager();
    bool managerLogin(string providedName, string providedPassword);
    void viewAllClients();
};

#endif      // End of Header Guard
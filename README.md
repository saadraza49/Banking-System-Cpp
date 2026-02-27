# 🏦 Banking Management System (C++ | OOP)

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue)
![OOP](https://img.shields.io/badge/Concept-Object%20Oriented%20Programming-green)
![Status](https://img.shields.io/badge/Status-Completed-success)

A console-based **Banking Management System** developed in **C++** using core **Object-Oriented Programming (OOP)** principles.

This project was built as part of my **BS Software Engineering (2nd Semester – Object Oriented Programming)** coursework.

---

## 📌 Overview

This system simulates basic banking operations for multiple clients and a manager.  
It demonstrates clean class design, separation of declaration and implementation files, and structured menu-driven interaction.

The project focuses on applying foundational OOP concepts in a practical way.

---

## 🧱 Project Structure
Banking-Management-System
│
├── bank.h # Class declarations (Client & Manager)
├── bank.cpp # Class definitions
├── manager.cpp # Manager interface (main)
├── client1.cpp # Client 1 interface
├── client2.cpp # Client 2 interface
└── client3.cpp # Client 3 interface


---

## 👤 Client Functionalities

Each client can:

- 🔐 Login with username and password
- 📄 View account details
- 💰 Deposit money
- 🏧 Withdraw money (with re-authentication)
- 📊 Check account balance
- ✏️ Change name (after CNIC verification)

---

## 🧑‍💼 Manager Functionalities

The manager can:

- 🔐 Login securely (hidden password input using `_getch()`)
- 📋 View all registered client account details

---

## 🛠 OOP Concepts Implemented

- Encapsulation (Private data members)
- Constructors (Default & Parameterized)
- Member Functions
- Header Guards
- Separate Compilation (`.h` and `.cpp` files)
- Object Composition (Manager contains Client objects)

---

## 🔑 Default Credentials

### Manager
Username: saad
Password: 0966


### Clients

| Client   | Username  | Password |
|----------|-----------|----------|
| Client 1 | Abdullah  | 1111     |
| Client 2 | Zaki      | 2222     |
| Client 3 | Zohaib    | 3333     |

---

## ⚙️ How to Compile & Run

Make sure you have **g++ installed**.

### Compile Manager:
```bash
g++ manager.cpp bank.cpp -o manager
./manager
```
Compile Client 1:
```
g++ client1.cpp bank.cpp -o client1
./client1
```
(Same method for client2.cpp and client3.cpp.)

## Limitations

- Console-based system (no GUI)
- No database or file handling (data is not persistent)
- Designed for academic learning purposes


## Academic Context

**Course:** Object Oriented Programming  
**Program:** BS Software Engineering  
**Semester:** 2nd  


## Future Improvements

- File handling for data persistence
- Dynamic client creation
- Admin panel improvements
- Password encryption
- Input validation enhancements

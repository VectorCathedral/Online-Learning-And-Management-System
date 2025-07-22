# 🎓 OLAMS – Online Learning And Management System

Welcome to **OLAMS**, a simple C++ console-based student learning management system. This tool simulates core LMS functionality like creating accounts, managing course credits, enrolling in classes, and viewing account details within the console — perfect for practice or simple demos.

---

## 🌟 Features

✅ Create a student account with full name and student ID  
✅ Add course credits  
✅ Enroll in a course (costs 1 credit per enrollment)  
✅ Check remaining course credit balance  
✅ View account summary  
✅ Full menu-driven interface  
✅ Input validation for all user actions

---

## 📁 File Structure

├── OLAMS.cpp # Main source code file for OLAMS



---

## 🧑‍🏫 Program Flow

1. User is greeted with the OLAMS main menu.
2. They can:
   - **Create an account** (full name + student ID + initial credits)
   - **Add more course credits**
   - **Enroll in a course** (1 credit deducted per course)
   - **View their current balance**
   - **See full account details**
   - **Exit the program**
3. Input is validated throughout to ensure meaningful entries.

---

## 🧑‍💻 How to Build & Run

### 🐧 Linux / macOS / WSL (g++)

```bash
g++ -o olams olams.cpp
./olams
```

## 🪟 Windows (MSVC / Visual Studio)
```
Create or open a Console App project.

Add the source code to a .cpp file.

Build and run from within the IDE.

```
```cpp
Welcome to OLAMS Online Learning And Management System!

=== Start Menu ===
1. Create Account
2. Add Course Credits
3. Enrol in course
4. Check Credit Balance
5. View Account Details
6. Exit
Choose an option: 1

=====Create Account====
Enter your full name: Sarah Mokoena
Enter your student ID: SM2023
Enter initial course credits (at least 1): 3
Account created successfully.

=== Start Menu ===
3. Enrol in course
Enrolled successfully. Remaining credits: 2

=== Start Menu ===
5. View Account Details
Student name: Sarah Mokoena
Student ID: SM2023
Remaining credits: 2
```


## 🛠️ Configuration Notes
No file input/output needed — all user data is stored in memory during program execution.

All menus are interactive via standard input (std::cin / std::cout).

Credit limits are enforced; enrollment will fail if credits are insufficient.

#include <string>
#include <numeric>
#include <utility>
#include <iostream>
#include <limits>

std::string full_name;
std::string username;
std::string stud_id;
int intitial_credits;
int credits;

void start_menu() {
    std::cout << "\n=== Start Menu ===\n";
    std::cout << "1. Create Account\n";
    std::cout << "2. Add Course Credits\n";
    std::cout << "3. Enrol in course\n";
    std::cout << "4. Check Credit Balance\n";
    std::cout << "5. View Account Details\n";
    std::cout << "6. Exit\n";
}

void create_account() {

    std::cout << "=====Create Account===="<<std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    do {
        std::cout << "Enter your full name: ";
        std::getline(std::cin, full_name);
        if (full_name.empty()) std::cout << "Name cannot be empty. Try again.\n";
    } while (full_name.empty());

    do {
        std::cout << "Enter your student ID: ";
        std::getline(std::cin, stud_id);
        if (stud_id.empty()) std::cout << "Student ID cannot be empty. Try again.\n";
    } while (stud_id.empty());

    while (true) {
        std::cout << "Enter initial course credits (at least 1): ";
        std::cin >> intitial_credits;

        if (std::cin.fail() || intitial_credits < 1) {
            std::cout << "Invalid input. Please enter a number >= 1.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else {
            break;
        }
    }

    credits = intitial_credits;

    std::cout << "Account created successfully.\n";
}

void addCourseCredits() {
    std::cout << "=====Add Course Credits====" << std::endl;

    int added;
    std::cout << "Enter number of credits to add (positive number): ";
    std::cin >> added;

    if (std::cin.fail() || added < 1) {
        std::cout << "Invalid input. No credits added.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    credits += added;
    std::cout << "Credits successfully added. Current credits: " << credits << "\n";
}

void enroll() {
    std::cout << "=====Enrol in Course====" << std::endl;

    while (true) {
        if (credits > 0) {
            credits = credits - 1;
            std::cout << "Enrolled successfully .Remaining credits:" << credits << std::endl;
            break;
        }
        else {
            std::cout << "Insufficient credits:" << credits << std::endl;
            break;

        }
        

    }
    
}

void checkCredits() {
    std::cout << "=====Check Credit Balance====" << std::endl;

    std::cout << "You currently have "<<credits << " course credits."<<std::endl;

}

void view_acc() {
    std::cout << "=====Account Details====" << std::endl;

    std::cout << "Student name:" << full_name << std::endl;
    std::cout << "Student ID:" << stud_id << std::endl;
    std::cout << "Remaining credits:"<<credits<<std::endl;

}


    
int main() {
    int response;
    std::cout << "Welcome to OLAMS Online Learning And Management System! "<<std::endl;

    while (true) {
        start_menu();
        std::cout << "Choose an option:";
        std::cin >> response;
        std::cout << std::endl;

        if (std::cin.fail()) {
            std::cout << "Invalid input. Try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (response) {
        case 1:
            create_account();
            break;


        case 2:
            addCourseCredits();
            break;

        case 3:
            enroll();
            break;

        case 4:
            checkCredits();
            break;


        case 5:
            view_acc();
            break;


        case 6:
            std::cout << "Thank you for using OLAMS Online Learning And Management System!\n";
            return 0;
        default:
            std::cout << "Invalid option. Please choose between 1 and 6.\n";
        }
    }

    return 0;
}

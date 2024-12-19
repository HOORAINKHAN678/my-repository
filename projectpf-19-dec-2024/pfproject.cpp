#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Structure to represent a Student
struct Student {
    int id;
    string name;
    char grade;
    int attendance;

    // Display student details
    void display() const {
        cout << setw(5) << id << setw(15) << name
             << setw(10) << grade << setw(12) << attendance << endl;
    }
};

// Vector to store all students
vector<Student> students;

// Function to find the index of a student by ID
int findStudentIndex(int id) {
    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            return i;
        }
    }
    return -1;
}

// Function to add a new student
void addStudent() {
    Student s;
    cout << "Enter Student ID: ";
    cin >> s.id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter Grade: ";
    cin >> s.grade;
    cout << "Enter Attendance: ";
    cin >> s.attendance;

    students.push_back(s);
    cout << "Student added successfully!\n";
}

// Function to view all students
void viewStudents() {
    if (students.empty()) {
        cout << "No records to display.\n";
        return;
    }
    cout << setw(5) << "ID" << setw(15) << "Name"
         << setw(10) << "Grade" << setw(12) << "Attendance" << endl;
    cout << "------------------------------------------\n";
    for (const auto& student : students) {
        student.display();
    }
}

// Function to update a student's record
void updateStudent() {
    int id;
    cout << "Enter Student ID to update: ";
    cin >> id;

    int index = findStudentIndex(id);
    if (index == -1) {
        cout << "Student ID not found.\n";
        return;
    }

    cout << "Enter new Name: ";
    cin.ignore();
    getline(cin, students[index].name);
    cout << "Enter new Grade: ";
    cin >> students[index].grade;
    cout << "Enter new Attendance: ";
    cin >> students[index].attendance;

    cout << "Record updated successfully!\n";
}

// Function to delete a student record
void deleteStudent() {
    int id;
    cout << "Enter Student ID to delete: ";
    cin >> id;

    int index = findStudentIndex(id);
    if (index == -1) {
        cout << "Student ID not found.\n";
        return;
    }

    students.erase(students.begin() + index);
    cout << "Student record deleted successfully!\n";
}

// Function to display the menu
void menu() {
    int choice;
    do {
        cout << "\nStudent Record System\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Update Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: updateStudent(); break;
            case 4: deleteStudent(); break;
            case 5: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);
}

int main() {
    menu();
    cout << "Program has terminated successfully.\n";
    cout << "Goodbye, and have a great day!\n";
    return 0;
}
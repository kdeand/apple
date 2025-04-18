#include <iostream>
using namespace std;

struct Student {

    string name;
    string id; 
    int gradelevel;
    Student* next;
};

Student s;

void addStudent(Student* s); 

int main() {

    int choice;
    cout << "Student Management System";
    do {  
        cout << "\n[1] - Add Student" << endl;
        cout << "[2] - Delete Student" << endl;
        cout << "[3] - View All Students" << endl;
        cout << "[4] - Search Student" << endl;
        cout << "[5] - Update Student" << endl;
        cout << "[6] - Sort Students" << endl;
        cout << "[7] - Exit" << endl;
    cout << "Input choice (1-7): ";
    cin >> choice;

    
    switch (choice) {
        case 1:
            addStudent(&s);
            break;

        case 2:

            break;

        case 3:

            break; 

        case 4:

            break;

        case 5: 

            break;

        case 6:

            break; 

        default:
            cout << "Invalid.";
    }
    

    } while (choice != 7);

}

void addStudent(Student* &s) {

}
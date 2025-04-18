#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Student {

    string name;
    string id; 
    int gradelevel;
    Student* next;
};

//declaration and initializartiojb  
Student s;
string filen = "StudentInfo.txt";

void deleteStudent(const string* filen, Student* s);
void addStudent(Student* s); 
void viewStudents(const string* filen);

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
            deleteStudent(&filen, &s);
            break;

        case 3:
            viewStudents(&filen);
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

void addStudent(Student* s) {
    cout << "Add Student Information" << endl<< endl;

    cout << "Name: "; 
    cin.ignore (); 
    getline(cin, s -> name); 

    cout << "Student ID: ";
    getline(cin, s -> id);

    cout << "Grade Level: ";
    cin >> s-> gradelevel;

    fstream file;
    file.open("StudentInfo.txt", ios:: app);

    if(!file.is_open()) {
        cout << "Error opening file." << endl;
    } else {  
        file << "Name: " << s -> name << endl;
        file << "Student ID: " << s -> id << endl;
        file << "Grade Level: " << s -> gradelevel << endl;
        file << endl;
        file.close();
        cout << "file saved." << endl;
    }  

 
    }

void viewStudents(const string* filen) {
  fstream file;
  file.open(filen -> c_str(), ios::in);

    if (!file.is_open()) {
        cout << "Error: unable to open file." << endl;
    } else {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        } cout << endl;
        
    }
}

void deleteStudent(const string* filen, Student* s) {
    string TargetID;
    cout << "Enter Student ID: " << endl;
    cin.ignore();
    getline(cin, TargetID);

    fstream inputfile("StudentInfo.txt");
    fstream tempfile("tempfile.txt");

    cout << "This worked" << endl;
}







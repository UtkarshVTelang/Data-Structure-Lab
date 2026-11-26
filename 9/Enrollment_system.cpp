
#include <iostream>
#include <string>
using namespace std;

// Structure for course enrollment
struct Enrollment {
    int courseID;
    Enrollment* next;
};

// Structure for student
struct Student {
    long long rollNumber;
    string name;
    string branch;
    int semester;

    Enrollment* enrolledCourses;
    Student* next;
};

// Structure for course
struct Course {
    int courseID;
    string courseName;
    Course* next;
};

// Hash Table Node
struct HashNode {
    Student* student;
    HashNode* next;
};

const int TABLE_SIZE = 10;

// Linked List of Students
Student* studentHead = nullptr;

// Linked List of Courses
Course* courseHead = nullptr;

// Hash Table
HashNode* hashTable[TABLE_SIZE] = {nullptr};


// Hash Function
int hashFunction(long long rollNumber) {
    return rollNumber % TABLE_SIZE;
}


// Search student using Hash Table
Student* searchStudent(long long rollNumber) {
    int index = hashFunction(rollNumber);

    HashNode* temp = hashTable[index];

    while (temp != nullptr) {
        if (temp->student->rollNumber == rollNumber) {
            return temp->student;
        }
        temp = temp->next;
    }

    return nullptr;
}


// Register New Student
void registerStudent() {
    long long roll;
    string name, branch;
    int semester;

    cout << "Enter Roll Number: ";
    cin >> roll;

    if (searchStudent(roll) != nullptr) {
        cout << "Roll Number already exists!\n";
        return;
    }

    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Branch: ";
    getline(cin, branch);

    cout << "Enter Semester: ";
    cin >> semester;

    Student* newStudent = new Student;

    newStudent->rollNumber = roll;
    newStudent->name = name;
    newStudent->branch = branch;
    newStudent->semester = semester;
    newStudent->enrolledCourses = nullptr;
    newStudent->next = studentHead;

    studentHead = newStudent;

    // Insert into Hash Table using Chaining
    int index = hashFunction(roll);

    HashNode* newNode = new HashNode;
    newNode->student = newStudent;
    newNode->next = hashTable[index];

    hashTable[index] = newNode;

    cout << "Student registered successfully!\n";
}


// Update Student Information
void updateStudent() {
    long long roll;

    cout << "Enter Roll Number: ";
    cin >> roll;

    Student* student = searchStudent(roll);

    if (student == nullptr) {
        cout << "Student not found!\n";
        return;
    }

    cout << "Enter New Name: ";
    cin.ignore();
    getline(cin, student->name);

    cout << "Enter New Branch: ";
    getline(cin, student->branch);

    cout << "Enter New Semester: ";
    cin >> student->semester;

    cout << "Student information updated!\n";
}


// Add New Course
void addCourse() {
    Course* newCourse = new Course;

    cout << "Enter Course ID: ";
    cin >> newCourse->courseID;

    Course* temp = courseHead;

    while (temp != nullptr) {
        if (temp->courseID == newCourse->courseID) {
            cout << "Course ID already exists!\n";
            delete newCourse;
            return;
        }
        temp = temp->next;
    }

    cout << "Enter Course Name: ";
    cin.ignore();
    getline(cin, newCourse->courseName);

    newCourse->next = courseHead;
    courseHead = newCourse;

    cout << "Course added successfully!\n";
}


// Display Available Courses
void displayCourses() {
    Course* temp = courseHead;

    if (temp == nullptr) {
        cout << "No courses available!\n";
        return;
    }

    cout << "\n--- Available Courses ---\n";

    while (temp != nullptr) {
        cout << "ID: " << temp->courseID
             << " | Name: " << temp->courseName << endl;

        temp = temp->next;
    }
}


// Enroll Student in Course
void enrollStudent() {
    long long roll;
    int courseID;

    cout << "Enter Student Roll Number: ";
    cin >> roll;

    Student* student = searchStudent(roll);

    if (student == nullptr) {
        cout << "Student not found!\n";
        return;
    }

    displayCourses();

    cout << "Enter Course ID: ";
    cin >> courseID;

    Course* course = courseHead;

    while (course != nullptr && course->courseID != courseID) {
        course = course->next;
    }

    if (course == nullptr) {
        cout << "Course not found!\n";
        return;
    }

    Enrollment* temp = student->enrolledCourses;

    while (temp != nullptr) {
        if (temp->courseID == courseID) {
            cout << "Student already enrolled!\n";
            return;
        }
        temp = temp->next;
    }

    Enrollment* newEnrollment = new Enrollment;

    newEnrollment->courseID = courseID;
    newEnrollment->next = student->enrolledCourses;

    student->enrolledCourses = newEnrollment;

    cout << "Student enrolled successfully!\n";
}


// Withdraw Student from Course
void withdrawStudent() {
    long long roll;
    int courseID;

    cout << "Enter Student Roll Number: ";
    cin >> roll;

    Student* student = searchStudent(roll);

    if (student == nullptr) {
        cout << "Student not found!\n";
        return;
    }

    cout << "Enter Course ID to withdraw: ";
    cin >> courseID;

    Enrollment* temp = student->enrolledCourses;
    Enrollment* prev = nullptr;

    while (temp != nullptr) {
        if (temp->courseID == courseID) {

            if (prev == nullptr) {
                student->enrolledCourses = temp->next;
            } else {
                prev->next = temp->next;
            }

            delete temp;

            cout << "Course withdrawn successfully!\n";
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    cout << "Enrollment not found!\n";
}


// Display Student Details
void displayStudent(Student* student) {
    cout << "\nRoll Number: " << student->rollNumber;
    cout << "\nName: " << student->name;
    cout << "\nBranch: " << student->branch;
    cout << "\nSemester: " << student->semester;

    cout << "\nEnrolled Courses:\n";

    Enrollment* enrollment = student->enrolledCourses;

    if (enrollment == nullptr) {
        cout << "No courses enrolled.\n";
    }

    while (enrollment != nullptr) {
        Course* course = courseHead;

        while (course != nullptr &&
               course->courseID != enrollment->courseID) {
            course = course->next;
        }

        if (course != nullptr) {
            cout << course->courseName << endl;
        }

        enrollment = enrollment->next;
    }

    cout << endl;
}


// Search and Display Student
void searchAndDisplay() {
    long long roll;

    cout << "Enter Roll Number: ";
    cin >> roll;

    Student* student = searchStudent(roll);

    if (student == nullptr) {
        cout << "Student not found!\n";
    } else {
        displayStudent(student);
    }
}


// Remove Student Record
void removeStudent() {
    long long roll;

    cout << "Enter Roll Number: ";
    cin >> roll;

    Student* student = searchStudent(roll);

    if (student == nullptr) {
        cout << "Student not found!\n";
        return;
    }

    // Remove from Student Linked List
    Student* temp = studentHead;
    Student* prev = nullptr;

    while (temp != nullptr && temp->rollNumber != roll) {
        prev = temp;
        temp = temp->next;
    }

    if (prev == nullptr) {
        studentHead = temp->next;
    } else {
        prev->next = temp->next;
    }

    // Remove from Hash Table
    int index = hashFunction(roll);

    HashNode* current = hashTable[index];
    HashNode* hashPrev = nullptr;

    while (current != nullptr) {
        if (current->student->rollNumber == roll) {

            if (hashPrev == nullptr) {
                hashTable[index] = current->next;
            } else {
                hashPrev->next = current->next;
            }

            delete current;
            break;
        }

        hashPrev = current;
        current = current->next;
    }

    // Delete all enrollments
    Enrollment* enrollment = student->enrolledCourses;

    while (enrollment != nullptr) {
        Enrollment* next = enrollment->next;
        delete enrollment;
        enrollment = next;
    }

    delete student;

    cout << "Student record removed successfully!\n";
}


// Display All Students
void displayAllStudents() {
    Student* temp = studentHead;

    if (temp == nullptr) {
        cout << "No students registered!\n";
        return;
    }

    while (temp != nullptr) {
        displayStudent(temp);
        temp = temp->next;
    }
}


// Free allocated memory
void cleanup() {
    while (studentHead != nullptr) {
        Student* temp = studentHead;
        studentHead = studentHead->next;

        Enrollment* enrollment = temp->enrolledCourses;

        while (enrollment != nullptr) {
            Enrollment* next = enrollment->next;
            delete enrollment;
            enrollment = next;
        }

        delete temp;
    }

    while (courseHead != nullptr) {
        Course* temp = courseHead;
        courseHead = courseHead->next;
        delete temp;
    }

    for (int i = 0; i < TABLE_SIZE; i++) {
        while (hashTable[i] != nullptr) {
            HashNode* temp = hashTable[i];
            hashTable[i] = hashTable[i]->next;
            delete temp;
        }
    }
}


// Main Function
int main() {
    int choice;

    do {
        cout << "\n===== UNIVERSITY STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Register New Student\n";
        cout << "2. Update Student Information\n";
        cout << "3. Add New Course\n";
        cout << "4. Display Available Courses\n";
        cout << "5. Enroll Student in Course\n";
        cout << "6. Withdraw Student from Course\n";
        cout << "7. Search Student\n";
        cout << "8. Remove Student Record\n";
        cout << "9. Display All Students\n";
        cout << "0. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerStudent();
                break;

            case 2:
                updateStudent();
                break;

            case 3:
                addCourse();
                break;

            case 4:
                displayCourses();
                break;

            case 5:
                enrollStudent();
                break;

            case 6:
                withdrawStudent();
                break;

            case 7:
                searchAndDisplay();
                break;

            case 8:
                removeStudent();
                break;

            case 9:
                displayAllStudents();
                break;

            case 0:
                cleanup();
                cout << "Exiting System...\n";
                break;

            default:
                cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 0);

    return 0;
}

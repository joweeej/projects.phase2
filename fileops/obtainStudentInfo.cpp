#include<iostream>
#include<fstream>
#include<string>
#include<cstring>//where strncpy is found
using namespace std;

//Define a structure to hold student details

struct Student{
    int rollNo;
    char name[50];//to store students name
    double marks;
    
    //A constuctor to make it easier to create student objects
    Student(int r = 0 , const char* n = "",double m =0.0)//const char* n will be used to store students name
    //"" sets the default value of n to an empty string
    {
        rollNo = r;
        strncpy(name,n,sizeof(name)-1);
        name[sizeof(name)-1] = '\0';//Ensure Null Termination
        marks = m;
    }
};

//Function to write student record to a binary File
void writeRecord(const string& filename, const Student& student) {
    ofstream outFile(filename, ios::binary | ios::app);  // Open file in append mode
    
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    outFile.write(reinterpret_cast<const char*>(&student), sizeof(student));  // Write binary data.Converts struct 'Student' to a bytestream for writing..
    outFile.close();
    cout << "Student record added successfully!" << endl;
}
//Function to read and display all student records from the binary File
void readRecords(const string filename){
    ifstream inFile(filename, ios::binary);//Open file in Binary Mode
    if(!inFile){
        cerr<<"Error in Opening File!!!"<<endl;
        return;
    }
    Student student;
    while (inFile.read(reinterpret_cast<char*>(&student), sizeof(student)))//converts bytestream back to Student Object
    {
        cout << "Roll No: " << student.rollNo << endl;
        cout << "Name: " << student.name << endl;
        cout << "Marks: " << student.marks << endl;
        cout << "-----------------------------" << endl;
    }

    inFile.close();//Close File
}

// Function to search for a student by roll number
//The function reads the binary file until it finds the student with the matching roll number.
void searchRecord(const string& filename, int rollNo) {
    ifstream inFile(filename, ios::binary);

    if (!inFile) {
        cerr << "Error opening file for searching!" << endl;
        return;
    }

    Student student;
    bool found = false;

    while (inFile.read(reinterpret_cast<char*>(&student), sizeof(student))) {
        if (student.rollNo == rollNo) {
            cout << "Student found!" << endl;
            cout << "Roll No: " << student.rollNo << endl;
            cout << "Name: " << student.name << endl;
            cout << "Marks: " << student.marks << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student with roll number " << rollNo << " not found!" << endl;
    }

    inFile.close();
}


int main(){
    string filename = "students.dat";//Binary File to store student records
    // Example of writing student records
    Student student1(101, "John Doe", 85.5);
    Student student2(102, "Jane Smith", 92.0);
    
    writeRecord(filename, student1);
    writeRecord(filename, student2);

    // Example of reading all student records
    cout << "Displaying all student records:" << endl;
    readRecords(filename);

    // Example of searching for a student by roll number
    int searchRollNo = 101;
    cout << "\nSearching for student with roll number " << searchRollNo << ":" << endl;
    searchRecord(filename, searchRollNo);

    return 0;
}
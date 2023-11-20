/*
    File Name       : inpputStudentData().cpp
    Matrix Number  : AM2307014329
                      AM2307013925
                      AM2307013927
                      AM2307013892
                      AM2307013914
    Section         : 2
    Lecturer        : Robaya Binti Jantan
    Course Code     : CC101
    Subject         : SWC1323 - Fundamental of Programming
    Program Desc.   : Sub program one to the main program 
                      to input the data of the students
                      
*/

#include <iostream> // Include the iostream library to enable input and output stream
#include <iomanip>  // Include the iomanip library to format the output
using namespace std; // Use the standard namespace

const int MAX_STUDENTS = 50; // Define a constant for the maximum number of students

int studentID[MAX_STUDENTS]; // Declare an array to store the IDs of the students
string studentName[MAX_STUDENTS]; // Declare an array to store the names of the students
double scores[MAX_STUDENTS]; // Declare an array to store the scores of the students
int attendance[MAX_STUDENTS]; // Declare an array to store the attendance of the students

double averageScores = 0.0; // Declare a variable to store the average scores
int totalStudents = 0; // Declare a variable to store the total number of students

void inputStudentData() // Define a function to input the data of the students
{
    int choice; // Declare a variable to store the user's choice
    cout << "How many students do you want to enter ?: "; // Ask the user how many students they want to enter
    cin >> choice; // Read the user's choice

    for (int i = totalStudents; i < totalStudents + choice; i++) // Loop through the number of students the user wants to enter
    {
        cout << "\nEnter data of student: " << i + 1 << endl << endl; // Prompt the user to enter the data of the student
        cout << "Enter Student ID: "; // Ask the user to enter the student's ID
        cin >> studentID[i]; // Read the student's ID
        cout << "Enter Student Name: "; // Ask the user to enter the student's name
        cin.ignore(); // Ignore any previous newline character
        getline(cin, studentName[i]); // Read the student's name
        cout << "Enter Scores: "; // Ask the user to enter the student's scores
        cin >> scores[i]; // Read the student's scores
        cout << "Enter Attendance (%): "; // Ask the user to enter the student's attendance
        cin >> attendance[i]; // Read the student's attendance
    }

    totalStudents += choice; // Update the total number of students
}

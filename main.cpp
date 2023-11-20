/*
    File Name       : main.cpp
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

int main() // Define the main function
{
    int value; // Declare a variable to store the user's choice
    while (true) // Start an infinite loop
    {
        cout << "-----------------------------------" << endl;
        cout << "Student Management System" << endl; // Name Of Student Management System
        cout << "Choose an option:" << endl; // Ask the user to choose an option
        cout << "\nEnter 1 to enter student data" << endl; // Option 1: Enter student data
        cout << "Enter 2 to calculate average scores" << endl; // Option 2: Calculate average scores
        cout << "Enter 3 to display student records" << endl; // Option 3: Display student records
        cout << "Enter 4 to delete a student record" << endl; // Option 4: Delete a student record
        cout << "Enter 5 to exit" << endl; // Option 5: Exit the program
        cout << "-----------------------------------" << endl;
        cin >> value; // Read the user's choice
        switch (value) // Switch on the user's choice
        {
        case 1:
            inputStudentData(); // Call the function to input student data
            break;
        case 2:
            calculateAverageScores(); // Call the function to calculate average scores
            break;
        case 3:
            displayStudentRecords(); // Call the function to display student records
            break;
        case 4:
            deleteStudentRecord(); // Call the function to delete a student record
            break;
        case 5:
            exit(0); // Exit the program
            break;
        default:
            cout << "Invalid Input" << endl; // If the user enters an invalid choice, print "Invalid Input"
            break;
        }
    }
    return 0; // Return 0 to indicate that the program has ended successfully
}

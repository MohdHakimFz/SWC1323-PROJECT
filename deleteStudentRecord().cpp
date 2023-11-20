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
                      to delete student record of the students
                      
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

void deleteStudentRecord() // Define a function to delete a student record
{
    int choice; // Declare a variable to store the user's choice
    cout << "-----------------------------------" << endl;
    cout << "Choose an option:" << endl; // Ask the user to choose an option
    cout << "Press 1 to delete all records" << endl; // Option 1: Delete all records
    cout << "Press 2 to delete a specific record" << endl; // Option 2: Delete a specific record
    cout << "-----------------------------------" << endl;
    cin >> choice; // Read the user's choice

    if (choice == 1) // If the user chooses to delete all records
    {
        totalStudents = 0;  // Reset the total number of students
        cout << "All records deleted successfully.\n"; // Print a success message
    }
    else if (choice == 2) // If the user chooses to delete a specific record
    {
        int id; // Declare a variable to store the ID of the student
        cout << "Enter the Student ID of the record you want to delete: "; // Ask the user to enter the ID of the student
        cin >> id; // Read the ID of the student

        for (int i = 0; i < totalStudents; i++) // Loop through all the students
        {
            if (studentID[i] == id) // If the ID of the student matches the ID entered by the user
            {
                for (int j = i; j < totalStudents - 1; j++) // Loop through the remaining students
                {
                    studentID[j] = studentID[j + 1]; // Shift the ID of the next student
                    studentName[j] = studentName[j + 1]; // Shift the name of the next student
                    scores[j] = scores[j + 1]; // Shift the score of the next student
                    attendance[j] = attendance[j + 1]; // Shift the attendance of the next student
                }

                totalStudents--; // Decrease the total number of students
                cout << "Record deleted successfully.\n"; // Print a success message
                return; // Exit the function
            }
        }

        cout << "No record found with the given ID.\n"; // If no student was found with the given ID, print a message
    }
    else // If the user enters an invalid choice
    {
        cout << "Invalid Input" << endl; // Print "Invalid Input"
    }
}
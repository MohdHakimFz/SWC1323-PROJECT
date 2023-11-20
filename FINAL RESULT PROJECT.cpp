/*
    File Name       : FINAL RESULT PROJECT.cpp
    Matrix Number  : AM2307014329
                      AM2307013925
                      AM2307013927
                      AM2307013892
                      AM2307013914
    Section         : 2
    Lecturer        : Robaya Binti Jantan
    Course Code     : CC101
    Subject         : SWC1323 - Fundamental of Programming
    Program Desc.   : To manage Starlight High School effectively manage student records, 
                      delete student records, academic performance, and attendance data.
                      
*/
#include <iostream> // Include the iostream library to enable input and output stream
#include <iomanip>  // Include the iomanip library to format the output
using namespace std; // Use the standard namespace

const int HIGHEST_STUDENTS = 50; // Define a constant for the maximum number of students

int studentID[HIGHEST_STUDENTS]; // Declare an array to store the IDs of the students
string studentName[HIGHEST_STUDENTS]; // Declare an array to store the names of the students
double scores[HIGHEST_STUDENTS]; // Declare an array to store the scores of the students
int attendance[HIGHEST_STUDENTS]; // Declare an array to store the attendance of the students

double averageScores = 0.0; // Declare a variable to store the average scores
int totalStudents = 0; // Declare a variable to store the total number of students

void inputStudentData() // Define a function to input the data of the students
{
    int choice; // Declare a variable to store the user's choice
    cout << "How many students do you want to enter ?: "; // Ask the user how many students they want to enter
    cin >> choice; // Read the user's choice

    // If the user enters an invalid choice
    if (choice <= 0)
    {
        cout << "Invalid Input" << endl; // Print "Invalid Input"
        return; // Exit the function
    }

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
    if (totalStudents <= 0)
    {
        cout << "Invalid Input" << endl; // Print "Invalid Input"
        return; // Exit the function
    }

}

void calculateAverageScores() // Define a function to calculate the average scores
{
    double sum = 0.0;
    for (int i = 0; i < totalStudents; i++) // Loop through all the students
    {
        sum += scores[i]; // Add the score of the student to the sum
    }

    if (totalStudents > 0) // If there are any students
    {
        averageScores = sum / totalStudents; // Calculate the average scores
    }

    cout << "Average Score Of Students Is: "  << fixed << setprecision(2) << averageScores << endl; // Print A Success Message
}

void displayStudentRecords() // Define a function to display the records of the students
{
    if (totalStudents == 0) // If there are no students
    {
        cout << "No Data" << endl; // Print "No Data"
    }
    else // If there are any students
    {
        cout << setw(15) << "Student ID" << setw(20) << "Student Name" << setw(10) << "Scores" << setw(15) << "Attendance (%)" << endl; // Print the headers

        for (int i = 0; i < totalStudents; i++) // Loop through all the students
        {
            cout << setw(15) << studentID[i] << setw(20) << studentName[i] << setw(10) << scores[i] << setw(15) << attendance[i] << endl; // Print the data of the student
        }

        cout << "\nAverage Scores: " << fixed << setprecision(2) << averageScores << endl; // Print the average scores
    }
}

void deleteStudentRecord() // Define a function to delete a student record
{
    int choice; // Declare a variable to store the user's choice
    cout << "-----------------------------------" << endl;
    cout << "Choose an option:" << endl; // Ask the user to choose an option4
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

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
                      to calculate average scores of the students
                      
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

void calculateAverageScores() // Define a function to calculate the average scores
{
    double sum = 0.0; // Declare a variable to store the sum of the scores
    for (int i = 0; i < totalStudents; i++) // Loop through all the students
    {
        sum += scores[i]; // Add the score of the student to the sum
    }

    if (totalStudents > 0) // If there are any students
    {
        averageScores = sum / totalStudents; // Calculate the average scores
    }
}
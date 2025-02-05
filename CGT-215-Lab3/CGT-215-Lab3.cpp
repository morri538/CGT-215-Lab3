// CGT-215-Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
using namespace std;

// Function to display the welcome message and menu
void displayMenu() {
    cout << "\n=============================\n";
    cout << "  Welcome to my Calculator!  \n";
    cout << "=============================\n";
    cout << "Please select an operation to perform:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "=============================\n";
}

// Function to get user input for two numbers
void getNumbers(double& num1, double& num2) {
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
}

// Function for Addition
void addNumbers() {
    double num1, num2;
    getNumbers(num1, num2);
    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
}

// Function for Subtraction
void subtractNumbers() {
    double num1, num2;
    getNumbers(num1, num2);
    cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
}

// Function for Multiplication
void multiplyNumbers() {
    double num1, num2;
    getNumbers(num1, num2);
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
}

// Function for Division (Handles division by zero)
void divideNumbers() {
    double num1, num2;
    getNumbers(num1, num2);

    if (num2 == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
    }
    else {
        cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
    }
}

// Main function (ONLY calls other functions)
int main() {
    int choice;

    displayMenu();  // Show the menu
    cout << "Your Selection: ";
    cin >> choice;

    switch (choice) {
    case 1: addNumbers(); break;
    case 2: subtractNumbers(); break;
    case 3: multiplyNumbers(); break;
    case 4: divideNumbers(); break;
    default: cout << "Invalid selection! Please try again." << endl;
    }

    return 0;  // Program completed successfully
}



        


    



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

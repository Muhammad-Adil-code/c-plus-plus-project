#include <iostream>

using namespace std;

int main()
{
    // Hard-coded student information
    cout << "Student Name: Muhammad Adil" << endl;
    cout << "Student ID: bc230408718" << endl;

    // Display menu
    cout << "Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;

    // declare the variable
    int choice;
    char option;

    // This Loop to keep the program running until the user chooses to exit
    do
    {
        cout << "Enter your choice:  ";
        cin >> choice;

        switch (choice)
        {
        case 1: // Addition
        {
            int n;
            cout << "How many numbers do you want to add? ";
            cin >> n;
            int sum = 0, num;
            for (int i = 0; i < n; ++i)
            {
                cout << "Enter number " << (i + 1) << ":   ";
                cin >> num;
                sum += num;
            }
            cout << "Result of addition :   " << sum << endl;
           
             break;
        }
        case 2: // Subtraction
        {
            int n;
            cout << "How many numbers do you want to subtract? ";
            cin >> n;
            int result = 0, num;
            cout << "Entre number 1:  ";
            cin >> result; // Initialize result with the first number
            for (int i = 1; i < n; ++i)
            {
                cout << "Enter number " << (i + 1) << ":   ";
                cin >> num;
                result -= num;
            }
            cout << "Result of subtraction :   " << result << endl;
           
             break;
        }
        case 3: // Multiplication
        {
            int n;
            cout << "How many numbers do you want to multiply? ";
            cin >> n;
            int product = 1, num;
            for (int i = 0; i < n; ++i)
            {
                cout << "Enter number " << (i + 1) << ":  ";
                cin >> num;
                product *= num;
            }
            cout << "Result of multiplication :   " << product << endl;
            
            break;
        }
        case 4: // Division
        {
            int n;
            cout << "How many numbers do you want to divide? ";
            cin >> n;
            float result = 0, num;
            cout << "Entre number 1:  ";
            cin >> result; // Initialize result with the first number
            for (int i = 1; i < n; ++i)
            {
                cout << "Enter number " << (i + 1) << ":  ";
                cin >> num;
                if (num == 0)
                {
                    cout << "Error: Cannot divide by zero." << endl;
                    result = 0;
                  
                      break;
                }
                result /= num;
            }
            if (result != 0) // If no division by zero occurred
                cout << "Result of division :   " << result << endl;
           
             break;
        }
        case 5: // Exit
            cout << "Exiting program..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        // Ask if the user wants to perform another operation
        cout << "Do you want to perform another operation? (y/n): ";
        cin >> option;
        if (option == 'y' || option == 'Y'){
        cout << "Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        
      } 
    }while (option == 'y' || option == 'Y');

    return 0;
}

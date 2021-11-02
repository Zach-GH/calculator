//
/*
 * Calculator.cpp
 *
 *  Date: 11/1/2021
 *  Author: Zachary Meisner
 */

#include <iostream>

using namespace std;

int main()
// changed from void to int so the program could return an integer
{
    // took out char statement as it was not being used
    
    double op1, op2; // changed from int to double to allow double input
    char operation;
    char answer = 'y';

// spaced everything below out so it was easier to see

// added spaces between the syntax to make it easier to see

    while ((answer == 'y') || (answer == 'Y') || (answer == 'n') || (answer == 'N')) {
        
        //added OR statement to allow Y n and N as acceptable answers.
        
        // added below IF statement to allow users to quit the program upon entering n or N
        
        if ((answer == 'n') || (answer == 'N')) {
            cout << "Program Finished." << endl;
            return 0;
        }
        
        cout << "Enter expression" << endl;

        cin >> op1 >> operation >> op2; // op1 and op2 were backwards, had to switch them

        if (operation == '+') {

        // + was being announced as a string and not char, changed "" to ''

        // needed brackets to encapsulate function, there was a semi colon so I changed that

            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;

        // changed >> to << which fixed the error

        }
        if (operation == '-') {
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
        }

        // same errors as above with brackets and <<

        if (operation == '*') {
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
        }
        
        // had to change / to * during test phase I found wrong output

        // was no semicolon at endl statement

        if (operation == '/') {
            cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
        }
        // had to change * to / output was wrong
        
        cout << "Do you wish to evaluate another expression? " << endl;

        cin >> answer;
    }

    return 0;

    // added return statement at the bottom for exit
}

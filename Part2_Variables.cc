/** This program will demonstrate the use of variables
  * to store numbers and other things */

#include <iostream>

using namespace std;

int main(){
	int variable = 3;
	/* This line declares (creates) a variable called 'variable'
	 * that we can use to store stuff
	 * there are many types of variables:
	 *
	 * int -> integers e.g. 0, 1, 2, 3, -1, -2
	 * float -> numbers with up to 8 decimal places
	 * double -> numbers with up to 16 decimal places
	 * char -> characters e.g. a, b, c, d
	 * bool -> truth values, true or false */

	cout << "This is what is stored in variable: " << variable << endl;
	/* This will print
	 * This is what is stored in variable: 3
	 * to the terminal window, and then skip down a line */

	variable = 5;
	/* We can change the value stored in variable,
	 * now variable contains 5 */

	cout << "This is what is stored in variable: " << variable << endl;
	/* This will print
	 * This is what is stored in variable: 5
	 * to the terminal window, and then skip down a line.
	 * The new value (5) in variable will be printed, instead of the old one */

	int variable2 = variable*3;
	/* Here we create another varible to show that we can use
	 * arithmetic expressions when dealing with variables.
	 * If it isn't already obvious, variable2 will hold the value 15 (3*5) */

	variable = variable+1;
	/* We can even use the variable itself when assigning a value
	 * so now variable will hold 6 instead of 5 */


	cout << "Enter an integer: ";
	cin >> variable;
	cout << "You entered: " << variable << endl;
	/* This 'cin' can be used to get input from the keyboard.
	 * Cin will pause the program, until the user enters something
	 * into the terminal window, and presses enter.
	 * Wheterver was enterd will be stored int variable.
	 * Note the opposite facing >> */
}
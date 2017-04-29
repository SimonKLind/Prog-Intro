/** This program will demonstrate the use of "if"
  * to determine different paths the code can take */

#include <iostream>

using namespace std;

int main(){
	int variable = 3;

	if(variable == 3) cout << "Variable is equal to 3!" << endl;
	/* This is a basic "if-statement"
	 * it tells the program to print "Variable is equal to 3!"
	 * if and only if the value stored in variable is 3
	 *
	 * note the use of two equality signs
	 * two equality signs are used to check if variable is 3
	 * one equality sign is used to store 3 in variable 
	 *
	 * there are many types of relations we can check
	 * (variable > 3) checks if variable is greater than 3
	 * (variable >= 3) checks if variable is greater than or equal to 3  
	 * (variable < 3) checks if variable is less than 3
	 * (variable <= 3) checks if variable is less than or equal to 
	 * (variable == 3) checks if variable is equal to 3
	 * (variable != 3) checks if variable is anything but 3
	 *
	 * All of these are what is called boolean expressions
	 * and they will be either true or false 
	 * e.g. either is is true that variable is equal to 3
	 * or it is false.
	 * The line of code after an if-statement will only 
	 * execute if the boolean expression is true, 
	 * if it is false, nothing will happen.
	 *
	 * Several boolean expressions can be combined
	 * to create a larger boolean expression using 'or' or 'and'
	 * in programming && is used to represent 'and'
	 * and || is used to represent 'or'
	 * (variable == 3 || variable == 4) checks if variable is equal to either 3 or 4
	 * (variable > 3 && variable < 8) checks if variable is grater than 3 and less than 8
	 * i.e. if variable is in the range 4-7
	 *
	 * note that something like (variable == 3 && variable == 4)
	 * can never be true, since variable can't be 3 and 4 at the same time */

	if(variable == 5){
		cout << "Variable is equal to 5!" << endl;
		variable = 7;
	}
	/* We can stuff more than one line of code into an
	 * if "block" using brackets like this */

	if(variable == 7){
		cout << "Variable is equal to 7!" << endl;
		variable = 9;
	}
	else{
		cout << "Variable is not equal to 7..." << endl;
		variable = 7;
		cout << "But now it is!" << endl;
	}
	/* An "if-else" statement can be used to branch into more than one path
	 * now it will print "Variable is equal to 7!" and set variable to 9
	 * if and only if variable is equal to 7
	 * 
	 * On the other hand, if variable is not equal to seven
	 * it will go to the "else" block and do that instead
	 * i.e. if variable is anything other than 7
	 * it will instead print "Variable is not equal to 7..."
	 * then set variable to 7 and print "But now it is!" */

	if(variable == 3){
		cout << "Variable is equal to 3!" << endl;
		variable = variable+1;
	}
	else if(variable == 5){
		cout << "Variable is equal to 5!" << endl;
		variable = variable+3;
	}
	else if(variable == 7){
		cout << "Variable is equal to 7!" << endl;
		variable = variable+5;
	}
	else{
		cout << "Variable is neither 3, 5, or 7..." << endl;
		variable = 3;
	}
	/* If-else statements can be strung together like this to create
	 * several branching options.
	 * With this structure it will execute only one of the paths,
	 * which path it takes is determined by the value of variable */
}
/** This program will show return types */

#include <iostream>

using namespace std;

void doSomething(){
	cout << "Now we are in the function doSomething" << endl;
}
/* The same doSomething from the previous part.
 * This has the "return-type" void
 * void means that the function does not return anything */

int getAnInt(){
	cout << "This function returns an int" << endl;
	return 15; // "Sen the value 15 back"
}
/* This function has return-type int, meaning it sends
 * an int-value back to wherever it was called from */

double getADouble(){
	cout << "This function returns a double" << endl;
	return 2.35; // "Send 2.35 back"
}
/* This function has return-type double, meaning it sends
 * a double-value back to wherever it was called from */

/* A function with a return type other than void
 * must have one of these "return-statements" and return a value */

int main(){
	int value = getAnInt();
	/* Here we call getAnInt to get an int-value,
	 * and then we store whatever value we get back in
	 * our variable value */

	cout << "The int-value we got was: " << value << endl;
	// This will print "The int-value we got was: 15"

	double decimalValue = getADouble();
	// Same thing can be used with any type of variable

	cout << "We can even print the returned values directly: " << getADouble() << endl;
	/* We don't have to assign the returned value to a variable,
	 * we can use it however we like */
}

/* You might wonder why the main function has the return type int.
 * This is because it would return an integer representing error-values
 * where anything but a 0 means an error occured
 * though this is not used too much...
 *
 * You might also wonder why there is no return-statement.
 * This is simply because the main function would always just have
 * return 0;
 * So most compilers let you get away without adding return 0
 * to the end of your code...
 * Some compilers still require a return statement from the main function though */
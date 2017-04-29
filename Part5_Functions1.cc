/** This program will show the what a function is an how to use it */

#include <iostream>

using namespace std;

void doSomething(){
	cout << "Now we are in the function doSomething" << endl;
}
/* This is a function.
 * This function will not do anything unless
 * it is "called" somewhere else in the program (e.g. the main function) */

int main(){
	doSomething();
	/* This is a "function call" to our function doSomething.
	 * From here the program will stop what it's doing here
	 * in the main function, go do whatever our doSomething-function
	 * tells it to do, and then come back here */

	cout << "Now we're back in the main function" << endl;

	doSomething();
	doSomething();
	// A function can be called many times 
}
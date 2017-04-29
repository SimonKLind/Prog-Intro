/** This is the most basic program a proggrammer ever writes,
  * all it does is print "Hello!" to the terminal window. */

// These things are comments

/* comments can be made either by starting
with /* and then ending with */

// or by two slashes like here
// but with slashes it only covers one line
// so you have to make new slashes every new line

// Comments are used to provide information about a program
// and documenting the code.
// Comments have no impact on the resulting program whatsoever
// they will simply be ignored.

// So let's get going


#include <iostream>
/* this line right here is an "include", it tells the compiler 
 * that we are going to need whatever is in the package "iostream" */

using namespace std;
// This declares use of the namespace std, it will be clear why later...

/* This right here is the "main function", every program must have one
 * and it is where the program will start */
int main(){ // Everything between the "curly-brackets" will be exevuted in the "main function"

	cout << "Hello!" << endl;
	/* This line of code tells the program to write "Hello!" (excluding the quotation marks)
	 * to the terminal window and then skip down a line.
	 * cout is the command to print something, and endl tells it to skip a line
	 * the << are so-called operators telling the program to "give 'hello!' to cout" 
	 * this is also where the namespace std is used
	 * without it we would have to write 
	 * std::cout << "Hello!" << std::endl;
	 * that's basically all the namespace std does for us... 
	 * Every line of code like this needs to end with a semicolon ; 
	 * to tell the compiler that is is the end of a statement */

} // Closing bracket tells the compiler that the program ends here
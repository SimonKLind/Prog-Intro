/** This is a small program to demonstrate pointers */

#include <iostream>

using namespace std;

int main(){
	int var = 3;
	// Here we create an int variable and store the value 3 in it

	int *pointer;
	/* Using an asterisk like this we create
	 * what's called a pointer to an int, and we 
	 * name this pointer 'pointer' (pointers are named
	 * just like any other variable). */

	/* Now, before we continue I'll explain just what a pointer is.
	 * A pointer is at its core just like any other variable in that
	 * it stores a value, and lets us access that value.
	 * What separates pointers from other variables is that pointers
	 * store memory addresses instead of "ordinary" values.
	 *
	 * Now we are going to use out pointer to store the memory address
	 * of var, making it "point to var".
	 *
	 * In order to do this we need to use the "address of" operator &.
	 * By placing an ampersand in front of a variable name
	 * we tell the compiler that we don't want the value of a variable
	 * but its memory address. */

	pointer = &var;
	// Now pointer holds the memory address of var

	cout << "Adress of var: " << pointer << endl;
	/* Trying to print a pointer will just result in
	 * printing some mumbo-jumbo looking hexadecimal number,
	 * since that's what's stored in pointer. */

	 /* The way to access the actual value pointer points to
	  * is by using the dereference operator *
	  * Yes, the asterisk is the dereference operator.
	  * This may seem a bit confusing at first since
	  * we already used an ampersand to create a pointer,
	  * but it's not that bad... */

	cout << "Value pointer points to: " << *pointer << endl;
	/* Here we print the value that's stored at the memory
	 * address that's stored in pointer.
	 * In case it wasn't clear, this will print
	 * "Value pointer points to: 3"
	 * Since value points to var, and var holds the value 3 */

	*pointer = 5;
	/* We can also change the value pointer points to
	 * through our pointer.
	 * Meaning that the value of var has now changed,
	 * we can verify by printing var. */

	cout << "Var after being changed throught pointer: " << var << endl;
	// Now this will print 5 instead of 3

	/* As we can see here, pointers allow direct access into
	 * other variables.
	 *
	 * You might be wondering how this is so useful.
	 * Unfortunately it won't become clear until we 
	 * explore arrays, which is a topic for later... */
}
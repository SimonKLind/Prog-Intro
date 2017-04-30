/** This program will show of arrays */

#include <iostream>

using namespace std;

int main(){
	int array[10];
	/* Here we declare an int array of size 10
	 * 
	 * Now what does that mean?
	 * Instead of creating one variable called array
	 * we created 10 variables, that all go by the name array */

	cout << "First element of array: " << array[0] << endl;
	/* Here we print the first element in our 10-element array.
	 * An interesting thing here is that we print the first element
	 * of array, without having first given it a value.
	 * As a result, it will just print whatever value was stored
	 * in the memory address before we created our array.
	 * Most of the time this value will just be 0, but sometimes
	 * you get some total garbage, so beware...
	 * 
	 * All elements in an array are accessed through an index like this.
	 * Note that the elements are enumerated not from 1 to 10,
	 * but from 0 to 9.
	 * So if we were to create an 100-element array it would
	 * be indexed from 0 to 99.
	 * In the general case, an n-element array is indexed from 0 to (n-1) */

	array[0] = 0;
	array[1] = 1;
	array[2] = 2;
	array[3] = 3;
	array[4] = 4;
	array[5] = 5;
	array[6] = 6;
	array[7] = 7;
	array[8] = 8;
	array[9] = 9;
	/* Here we manually give all the elements in array
	 * a value.
	 * You might have noticed that i wrote manually,
	 * implying there's another way.
	 * Remember for loops? */

	for(int i=0; i<10; ++i){
	/* Reminder: this for loop creates an int called i with value 0,
	 * adds one to it after every iteration of the loop
	 * and stops when i reaches 10 */
		array[i] = i;
	}
	/* By iteratiing through the array indices like this
	 * we accomplish the exact same thing in less than half 
	 * the code, and this is just for a 10-element array.
	 * Imagine a 100-element array, or 1000-element array...
	 * Now you might see why arrays are useful. */


	/* One interesting thing about arrays is to print
	 * the memory address of each element */
	for(int i=0, i<10; ++i){
		cout << "Address of array[" << i << "]: " << &array[i] << endl;
	}
	/* If you run this you would see that
	 * each address is exactly four numbers apart.
	 * An int variable is exactly 4 bytes in size,
	 * meaning that each of the array elements are stacked
	 * one after another in memory.
	 *
	 * This will become useful especially when passing arrays
	 * to function parameters */
}
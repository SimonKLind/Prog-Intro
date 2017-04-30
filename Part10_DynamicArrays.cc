/** This program will show how we can dynamically
  * create arrays of arbitraty size */

#include <iostream>

using namespace std;

int main(){
	/* Say for the sake of example that we want
	 * a user to input a number and create an array
	 * of that size.
	 *
	 * You might wan to try:
	 * 		int array[variable];
	 *
	 * Then you would get the compiler telling you off
	 * for variable not being a compile-time constant
	 *
	 * That's because this is a so-called static array
	 * and the compiler needs to know how much memory to
	 * reserve for this array, since variables like this
	 * are stored in only a small, specific portion of memory.
	 * 
	 * Dynamic memory allocation allows us to create
	 * not only arrays of unknown size, but also
	 * incredibly large arrays (hundreds of millions of elements). */

	int *array;
	// It all starts off with a pointer

	int lengthOfArray;
	cout << "How large should the array be?" << endl;
	cin >> lengthOfArray;
	// just to follow through and actually show an array of unknown size

	array = new int[lengthOfArray];
	/* Here we allocate memory for an int array
	 * of whatever size is in lengthOfArray.
	 *
	 * This basically just tells the operating system to
	 * "Make room for lengthOfArray number of ints, 
	 * and give me a pointer to the first one"
	 *
	 * That's why we use a pointer, to store the location of the array,
	 * since it's in another part of memory.
	 *
	 * From here we can use if just like any other array */

	for(int i=0; i<lengthOfArray; ++i){
		array[i] = i;
		cout << "Array[" << i << "]: " << array[i] << endl;
	}
	// Assigning values and printing array of unknown size...

	/* This is where pointers really start to show their potential.
	 * Here we are just given a pointer to the first element in our array
	 * and from there we can index it just like normally.
	 * After all, our program knows where the array starts, and
	 * it knows how big one int is, so it can just skip ahead a few
	 * memory addesses and get to exactly the element we want to access */


	delete[] array;
	/* The only thing we need to do is clean up the memory we used.
	 * Using delete[] like this tells the operating system that
	 * we are done with the memory, and it's free to be used by
	 * another program. */
}
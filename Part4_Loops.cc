/** This is a program to demonstrate loops */

#include <iostream>

using namespace std;

int main(){
	int counter = 1;

	while(counter <= 10){
		cout << "Current value of counter: " << counter << endl;
		counter+=1; // This is another way of saying counter=counter+1;
	}
	/* This is a "While-loop"
	 * and it will do whatever is between its brackets
	 * over and over again for as long as
	 * counter is less than or equal to 10
	 *
	 * Loops use boolean expressions like this to determine when to stop. 
	 * If you mess up the boolean expression, you might end up with 
	 * a loop that never stops... 
	 *
	 * Note that if counter is greater than 10 when the loop is encountered
	 * it will not loop even once */



	for(int count = 1; count<=10; ++count){
		cout << "Current value of count: " << counter << endl;
	}
	/* This nasty looking thing is a "for-loop",
	 * while it may look intimidating at first, it's incredibly
	 * useful once you get used to it
	 *
	 * So what does this thing do?
	 * A for loop takes 3 "arguments" 
	 *
	 * First: the initializing statement
	 * This is what it does before entering the loop,
	 * in our case here it creates an int variable called 'count'
	 * and sets its value to 1
	 *
	 * Second: the stopping condition
	 * Same as in the while-loop, this is a boolean expression
	 * used to determine when to stop looping
	 *
	 * Third: the iteration statement
	 * This is what is does after every time it loops,
	 * in our case it adds one to our count variable
	 * (++count is yet another way of saying "add 1 to count")
	 *
	 * Semicolons are used to separate these arguments.
	 * Note that there is no semicolon after ++count,
	 * just between the arguments 
	 *
	 * To clarify, the way this loop works is as follows:
	 * - Initializing statement
	 * - Check if condition is true
	 * - Loop
	 * - Iteration statement
	 * - Check if condition is true
	 * - Loop
	 * - Iteration statement
	 * - Check if condition is true
	 * - Loop
	 * - Iteration statement
	 * - Check if condition is true
	 * - Loop
	 * etc... and when the condition is false it stops looping */

	/* There exists a third loop as well
	 * called a "do-while-loop", which looks as follows: */
	do{
		cout << "Value of counter: " << counter << endl;
		counter += 1;
	}while(counter <= 10);
	/* This works exactly as the while loop, except
	 * it checks the stopping condition AFTER the loop,
	 * meaning it will loop at least once */
}
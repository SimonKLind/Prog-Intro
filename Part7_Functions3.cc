/** This program will show function parameters */

#include <iostream>

using namespace std;

void printInt(int number){
	cout << "The number passed to this function is: " << number << endl;
}
/* This function takes one parameter (the 'int number')
 * and prints it. 
 * Parameters allow functions to be more versatile in the way they're used,
 * by allowing values to be "passed" to them through parameters */

int addTwoNumbers(int a, int b){
	cout << "This function is going to add " << a << " and " << b << endl;
	return a+b;
}
// This function takes two parameters, adds them together and returns the sum 

int addThreeNumbers(int a, int b, int c){
	int sum = 0;
	sum += a; // "add a to sum"
	sum += b;
	sum += c;
	return sum;
}
/* This function adds three numbers and returns the sum.
 * This also shows that a function can create it's own variables,
 * here we create the variable sum which only exists inside of this function */

int main(){
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	printInt(num1);
	printInt(num2);
	printInt(num3);
	// This passes first num1 to the printInt function, then num2, and then num3

	int sum12 = addTwoNumbers(num1, num2);
	// Here we pass num1 and num2 to be added and store the result in sum12

	cout << num1 << "+" << num2 << " = " << sum12 << endl;


	int sum123 = addThreeNumbers(num1, num2, num3);
	// Here we pass all nums to be added and store the result in sum123

	cout << num1 << "+" << num2 << "+" << num3 << " = " << sum123 << endl;
}
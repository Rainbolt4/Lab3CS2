//Dominic Rainbolt
// Lab 3 



#include<iostream>
using std::cin;
using std::cout;
using std::endl;


int main(){

	
// problem 1
	/*
	int problem1para;
	cout << "please enter in a number for problem 1" << endl;
	cin >> problem1para;
	short sum = 0;
	for (short i = 0; i < problem1para; i++) {
		sum += i;
	}
	cout << "The sum of the numbers from 1 to " << problem1para << " is " << sum << endl;
	*/


// problem 2 using longs
	/*
	bool done = false;
	
	int problem1para;
	cout << "please enter in a number for problem 2" << endl;
	cin >> problem1para;
	long sum = 0;
	for (long i = 0; i < problem1para; i++) {
		sum += i;
	}
	cout << "The sum of the numbers from 1 to " << problem1para << " is " << sum << endl;
	*/


// problem 3 factorial.
	/*
	bool done = false; 
//	while (!done) {
		int problem1para;
		cout << "please enter in a number for problem 3" << endl;
		cin >> problem1para;
		float product = 1;
		for (long i = 1; i < problem1para + 1; i++) {
			product *= i;
		}
		cout << "The product of the numbers from 1 to " << problem1para << " is " << product << endl;
//	}
*/


// problem 4 factorial stored into double.
/*
bool done = false;
while (!done) {
int problem1para;
cout << "please enter in a number for problem 4" << endl;
cin >> problem1para;
double product = 1;
for (long i = 1; i < problem1para + 1; i++) {
product *= i;
}
cout << "The product of the numbers from 1 to " << problem1para << " is " << product << endl;
	}
*/

// problem 5 add N reciprocals with floats
	/*
	bool done = false;
	while (!done) {
		float problem1para;
		cout << "please enter in a number for problem 5" << endl;
		cin >> problem1para;
		float sum = 0;
		for (int i = 0; i < problem1para; i++) {
			sum = sum + 1 /problem1para;
		}
		cout << "Adding 1/ " << problem1para << " " << problem1para << " times should be 1 and is computed to be " << sum << "." << endl;
	}
	*/

// problem 5 with a double
/*
	bool done = false;
	while (!done) {
		double problem1para;
		cout << "please enter in a number for problem 5.2" << endl;
		cin >> problem1para;
		double sum = 0;
		double recip = 1 / problem1para;
		sum = recip * problem1para; // adding each on indivuduals as the instructions required made for long compute times, hopefully this step was inteneded to be used
*/
		/* for (int i = 0; i < problem1para; i++) {
			sum += recip;
		} */
	/*
		cout << recip;
		cout << "Adding 1/ " << problem1para << " " << problem1para << " times should be 1 and is computed to be " << sum << "." << endl;
	}*/

// problem 6 the puzzle
	for (float i = 3.4; i < 4.4; i += 0.2) { cout << "i = " << i << endl; }


	system("pause");

	return 0;
}

//Function to add up to N


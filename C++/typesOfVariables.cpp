#include<bits/stdc++.h>
using namespace std;


int main() {
	/*
	1. Ordinary Variable:
	    --> A block gets created in the memory with name x, value 5 and some address(starting at base address)
	2. Pointer Variable:
	    --> Used to hold address of some other variable
	3. Reference Variable: (New in C++, was not in C)
	    --> It is a new name to an already existing variable
	    --> To be initialized at declaration only(with some previously created variable and not constant)
	    --> Contains reference of another variable
	    --> Reference variables cannot be updated

[
That's correct. In C++, a reference variable cannot be updated to refer to another variable. Once a reference is initialized with a variable, either the variable name or the reference name may be used to refer to the variable, but the reference cannot be changed to refer to another object.
Here is an example:
int main() {
  int x = 5;
  int& y = x; // y is now a reference to x

  y = 10; // This will change the value of x, because y and x refer to the same object

  int z = 15;
  y = z; // This will not compile, because y cannot be changed to refer to z
}
]
	    --> Modern style of pointer. It is an internal pointer


	IMP: Address will be used in context of pointers and reference will be used in case of reference variables
	*/
	cout << "Ordinary Variable:\n";
	int x = 3; // Ordinary Variable
	cout << "x: " << x << endl;

	cout << "\nPointer Variable:\n";
	int *p;   // Pointer Variable
	p = &x; // To be read as: p holds address(&) of x
	cout << "p (Address of x): " << p << endl;
	cout << "*p (Value at address of x): " << *p << endl;

	cout << "\nReference Variable:\n";
	int &y = x; // Reference Variable --> Reference of x is stored in y
	cout << "y (Value of x): " << y << endl;
	cout << "&y (Reference of x): " << &y << endl;

	assert(p == &y); // Value of address and reference for the same variable should be same;


	y++; // This increments the value of x

	cout << "\nAfter doing y++:\n";

	cout << "x: " << x << endl; // Value of x changes to 4

	cout << "y (Value of x): " << y << endl; // Value of y changes to 4
	cout << "&y (Reference of x): " << &y << endl;
}
